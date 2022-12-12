`timescale 1ns / 1ps
`include "name.v"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:47:41 10/29/2022 
// Design Name: 
// Module Name:    datapath1 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module controller(
	input [31:0] Instr,
	input [1:0] Level,
	input cmp,
	input JUMP,//在ID级算出JUMPOut， 通过JUMP不断接收
	input [31:0] RD,
	//output [1:0] RegDist, //寄存器写选择信号
	output [1:0] ALUSrc,
	output [1:0] MemtoReg,
	output RegWrite,
	output MemWrite,
	output [1:0] PCSrc, //输出信号 跳转指令相关
	output [1:0] ExtOp,
	output [3:0] ALUCtrl, //ALU两位控制信号
	output [3:0] DMMode, //控制DM操作
	output [4:0] A3,
	output [3:0] CMPMode,
	output [3:0] MULDIVMode,
	output HILOSel,
	output reg [1:0] tnew,//alway块要用reg
	output [1:0] tuse_rs,
	output [1:0] tuse_rt,
	output MULDIV_Type,
	output JUMPOut,
	output lwbti
);
//R
wire [1:0] RegDist;
wire [5:0] Op = Instr[31:26];
wire [5:0] Funct= Instr[5:0];
wire _add = (Op == `_R && Funct == `ADD);
wire _sub = (Op == `_R && Funct == `SUB);
wire _or = (Op == `_R && Funct == `OR);
wire _and = (Op == `_R && Funct == `AND);
wire _slt = (Op == `_R && Funct == `SLT);
wire _sltu = (Op == `_R && Funct == `SLTU);
wire _swc = (Op == 6'b101010 && Funct == 6'b101110);
wire _fdiv = (Op == `_R && Funct == `FDIV);

//jump reg or link reg or both
wire _jr = (Op == `_R && Funct == `JR);
wire _jalr = (Op == `_R && Funct == `JALR);

//I
//I_CAL
wire _ori = (Op == `ORI);
wire _lui = (Op == `LUI);
wire _andi = (Op == `ANDI);
wire _addi = (Op == `ADDI);

//I_LD_ST
wire _lw = (Op == `LW);
wire _lb = (Op == `LB);
wire _lh = (Op == `LH);
wire _lhu = (Op == `LHU);
wire _lbu = (Op == `LBU);
wire _sw = (Op == `SW);
wire _sh = (Op == `SH);
wire _sb = (Op == `SB);
wire _lwbti = (Op == `LWBTI);
//I-b-jump
wire _beq = (Op == `BEQ);
wire _bne = (Op == `BNE);
wire _bnezalc = (Op == `BNEZALC);//注意可能要两个参数才能确定！！！

//J
wire _jal = (Op == `JAL);//define + "`"
wire _j = (Op == `J);

//R-Type MULDIV
wire _mfhi = (Op == `_R && Funct == `MFHI);
wire _mflo = (Op == `_R && Funct == `MFLO);
wire _mult = (Op == `_R && Funct == `MULT);
wire _multu = (Op == `_R && Funct == `MULTU);
wire _div = (Op == `_R && Funct == `DIV);
wire _divu = (Op == `_R && Funct == `DIVU);
wire _mthi = (Op == `_R && Funct ==  `MTHI);
wire _mtlo = (Op == `_R && Funct == `MTLO);

assign MULDIV_Type = (_mfhi | _mflo | _mult | _multu | _div | _divu | _mthi | _mtlo | _fdiv);//fdiv仅为三个周期
//后期改进方向：指令细化分类，增加复用性，添加乘除模块

//wire 前面一定要加下划线！！！！不然查不到BUG！！！！！
//

assign RegDist = (_ori | _lui |  _lw | _lb | _lh | _lhu | _lbu | _andi | _addi) ? `RegDist_rt :
						(_jal | _bnezalc) ? `RegDist_$ra :
						`RegDist_rd; //含jalr //含mflo mfhi
						
assign ALUSrc = (_ori | _lui | _lw | _sw | _lb | _sb | _lh | _sh | _lhu | _lbu | _andi | _addi | _lwbti) ? `ALUSrc_ExtImm :
					`ALUSrc_rt; //ALU  second imput selection
					
assign MemtoReg = (_lw | _lb | _lh | _lbu | _lhu | _lwbti) ? `MemtoReg_MemOut :
						(_jal | _jalr | _bnezalc) ? `MemtoReg_NowPC :
						(_mfhi | _mflo) ? `MemtoReg_MULDIVOut : 
						`MemtoReg_ALUOut;
						

assign RegWrite = (_add | _sub | _ori | _lui | _lw | _jal | _jalr | _lb | _lh | _lbu | _lhu | _and | _or | _andi | _addi | _slt | _sltu | _swc | _mfhi | _mflo | (JUMP === 1'b1) | _lwbti)  ? `RegWrite_Yes:
					`RegWrite_No;
						
assign MemWrite = (_sw | _sh | _sb) ? `MemWrite_Yes : 
					`MemWrite_No;
					
assign PCSrc = (_beq | _bne | _bnezalc) ? `PCSrc_Beq : //b_jump
					(_jal | _j) ? `PCSrc_Jal : ////j指令只有这一根线
					(_jr | _jalr) ? `PCSrc_Jr : //must secure the connection of single wire 在模块内部计算 
					`PCSrc_Order;
					
assign ExtOp = (_lw | _sw | _beq | _bne | _lb | _sb | _lh | _sh | _lbu | _lhu | _bnezalc | _addi | _lwbti) ? `ExtOp_signed : 
					(_lui) ? `ExtOp_high :
					`ExtOp_unsigned; //addi有符号， andi无符号
					
assign ALUCtrl = (_sub | _beq) ? `ALUCtrl_SUB :  //全称
						(_ori | _or) ? `ALUCtrl_OR :
						(_andi | _and) ? `ALUCtrl_AND:
						(_slt) ? `ALUCtrl_SMALL : 
						(_sltu) ? `ALUCtrl_SMALLU : 
						(_swc) ? `ALUCtrl_SWC : 
						`ALUCtrl_ADD;//默认
						
assign DMMode = (_lb |_sb) ? `DMMode_Byte : 
						(_lh | _sh) ? `DMMode_Half :
						(_lbu) ? `DMMode_ByteU : 						
						(_lhu) ? `DMMode_HalfU : 
						`DMMode_Word;
	
assign A3 = (_lwbti) ? ( (Level >= `Level_WB) ? (RD[31:27] > Instr[20:16] ? RD[31:27] : Instr[20:16]) : 5'd0) : //不知道写那个就不转发
				(RegDist == `RegDist_$ra) ? 5'b11111 : //$ra
				(RegDist == `RegDist_rt) ? Instr[20:16] : //rt
				Instr[15:11]; //rd //默认 //必须要写才有效

assign CMPMode = (_bne) ? `CMPMode_NOTEQUAL : 
						(_bnezalc) ? `CMPMode_NOTEQUALZ : //注意添加不等号
						`CMPMode_EQUAL; //default

assign MULDIVMode = (_mult) ? `MULDIVMode_MULT :
						(_multu) ? `MULDIVMode_MULTU : 
						(_div) ? `MULDIVMode_DIV : 
						(_divu) ? `MULDIVMode_DIVU : 
						(_mthi) ? `MULDIVMode_MTHI : 
						(_mtlo) ? `MULDIVMode_MTLO : 
						(_fdiv) ? `MULDIVMode_FDIV : 
						`MULDIVMode_NOTHING; //默认乘法
						
assign HILOSel = (_mfhi) ? `MULDIV_HIGH: `MULDIV_LOW;


assign JUMPOut = (_bnezalc & cmp);
assign lwbti = _lwbti;
		//tnew		
always@(*) begin
	case(Level)
	`Level_EX : tnew = (_add | _sub | _ori | _lui | _andi | _and | _or | _addi | _slt | _sltu | _swc | _mfhi | _mflo) ? 2'b01 : //新数据需要一个周期写入下一级流水线寄存器 jal, jalr tnew = 0
				(_lw | _lh | _lb | _lbu | _lhu | _lwbti) ? 2'b10 : // tnew = 0 //mfhi mflo rd is the same as ordinary R-Type instr
				2'b00;

	`Level_MEM: tnew = (_lw | _lh | _lb | _lbu | _lhu |  _lwbti) ? 2'b01 :
		2'b00;
	
	`Level_WB: tnew = 2'b00; //jal, jalr bnezalce tnew = 0
	default: tnew = 2'b00;
	endcase
end	

	//tuse
	assign tuse_rs = (_add | _sub | _ori | _lui | _lw | _sw | _lb | _sb | _lh | _sh | _lbu | _lhu | _andi | _or | _and | _addi | _slt | _sltu | _swc | _mthi | _mtlo | _mult | _multu | _div | _divu | _lwbti | _fdiv) ? 2'b01 : //base
						(_beq |  _bne | _jr | _jalr | _bnezalc) ? 2'b00 : //b_jump | J_jump
						2'b11;//2'b3相当于无限大
	assign tuse_rt = (_add | _sub | _or | _and | _slt | _sltu | _swc | _mult | _multu | _div | _divu | _fdiv) ? 2'b01 : //1
						(_beq | _bne | _bnezalc) ? 2'b00 : //0 这里曾经Bug only one instruction in one time
						(_sw | _sh | _sb) ? 2'b10 : //2注意_sb, _sh are extensions of  sw 最迟在这里生成
						2'b11; //inf 含立即数类型的rt
endmodule


module Hcontroller( //避免与上面的模块耦合
	input [31:0] IDInstr,
	input [31:0] EXInstr,
	input [31:0] MEMInstr,
	input [31:0] WBInstr,
	
	input EXRegWrite,
	input MEMRegWrite,
	input WBRegWrite,
	
	input [4:0] EXA3,
	input [4:0] MEMA3,
	input [4:0] WBA3,
	
	input [1:0] EXtnew,
	input [1:0] MEMtnew,
	input [1:0] WBtnew,
	input [1:0] tuse_rs,
	input [1:0] tuse_rt,//只有ID级会生成tuse
	input IDMULDIV_Type,
	input Busy,
	input Start,
	input EXlwbti,
	input MEMlwbti,
	
	output [1:0] IDRD1Sel,
	output [1:0] IDRD2Sel,
	output [1:0] EXRD1Sel,
	output [1:0] EXRD2Sel,
	output [1:0] MEMRD2Sel,
	//output [1:0] NPCRD1Sel,
	output Stalk
);

	wire [4:0] ID_rs = IDInstr[25:21];
	wire [4:0] EX_rs = EXInstr[25:21];
	wire [4:0] MEM_rs = MEMInstr[25:21];
	wire [4:0] WB_rs = WBInstr[25:21];
	
	wire [4:0] ID_rt = IDInstr[20:16];
	wire [4:0] EX_rt = EXInstr[20:16];
	wire [4:0] MEM_rt = MEMInstr[20:16];
	wire [4:0] WB_rt = WBInstr[20:16];
	
	
	//暂停逻辑
	assign Stalk = ((ID_rs == EXA3) & (tuse_rs < EXtnew) & (ID_rs != 5'd0) & EXRegWrite) | 
						((ID_rs == MEMA3) & (tuse_rs < MEMtnew) & (ID_rs != 5'd0) & MEMRegWrite) |
						((ID_rs == WBA3) & (tuse_rs < WBtnew) & (ID_rs != 5'd0) & WBRegWrite) |
						((ID_rt == EXA3) & (tuse_rt < EXtnew) & (ID_rt != 5'd0) & EXRegWrite) | 
						((ID_rt == MEMA3) & (tuse_rt < MEMtnew) & (ID_rt != 5'd0) & MEMRegWrite) | //tuse < tnew stalk
						((ID_rt == WBA3) & (tuse_rt < WBtnew) & (ID_rt != 5'd0) & WBRegWrite) | 
						((Busy | Start) & IDMULDIV_Type)| //difference between && and &
						((EXlwbti === 1'b1) & tuse_rt < EXtnew) | ((MEMlwbti === 1'b1) & tuse_rt < MEMtnew) //如果不是所有寄存器都要写，在这里加条件 可能要读且时间不满足
						;
	//转发逻辑
	assign EXRD1Sel = ((EX_rs == MEMA3) & (EX_rs != 5'd0) & MEMRegWrite) ? 2'b10 ://数字越大，优先级越高
						((EX_rs == WBA3) & (EX_rs != 5'd0) & WBRegWrite) ? 2'b01 : 
						`DATA_ORIGIN;

	assign EXRD2Sel = ((EX_rt == MEMA3) & (EX_rt != 5'd0) & MEMRegWrite) ? 2'b10 : //问题在这里 结合三目运算符顺序
						((EX_rt == WBA3) & (EX_rt != 5'd0) & WBRegWrite) ? 2'b01 ://A3就是最终要写的那个寄存器
						`DATA_ORIGIN;

	assign IDRD1Sel = ((ID_rs == EXA3) & (ID_rs != 5'd0) & EXRegWrite) ? 2'b11 : //jr选的是第一个数
							((ID_rs == MEMA3) & (ID_rs != 5'd0) & MEMRegWrite) ? 2'b10 :
						((ID_rs == WBA3) & (ID_rs != 5'd0) & WBRegWrite) ? 2'b01 : 
						`DATA_ORIGIN;
	assign IDRD2Sel =  ((ID_rt == EXA3) & (ID_rt != 5'd0) & EXRegWrite) ? 2'b11 : //jr选的是第一个数一般不用 //写了才转发双保险
						((ID_rt == MEMA3) & (ID_rt != 5'd0) & MEMRegWrite) ? 2'b10 :
						((ID_rt == WBA3) & (ID_rt != 5'd0) & WBRegWrite) ? 2'b01 : //这里是暴力转发 A3归一化写入寄存器
						`DATA_ORIGIN; //$0永远不转发
	/****	
	重要信息
	rt 域有效性问题是指有些指令的 rt 域不是用来表示读寄存器编号的，比如 j 指令没有 rt 域、ori 指令的 rt 域表示写入寄存器的编号，那么我们
	是否需要对这些指令进行特判呢？答案是不需要。对于 rtID 域无效的指令，即使我们转发了相应的数据，也不会影响流水线的正确性，因此无需特判。
	if the data changed and will probably be used, then transfer the data brutally.
`	***/
	assign MEMRD2Sel = ((MEM_rt == WBA3) & (MEM_rt != 5'd0) & WBRegWrite) ? 2'b01 : //2'b01是WB级的数据 renew the data continuously
						`DATA_ORIGIN;
						
	//不是为了获得正确数据而获得正确数据，而要保证后面的连贯正确性
endmodule
