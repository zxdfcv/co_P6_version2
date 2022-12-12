//?��������Ƶ�����ͨ·�ܹ�ͼ�Լ���������ģ�����������˿ڣ��� datapath.v �ж���һЩ�ڲ��� wire �ͱ�����
//����ģ�����߼���ϵ���Ը�������ģ�����ʵ������������һ��
//ʹ֮��Ϊһ�����壬���Ԥ�����������źŵ����������˿ڼ��ɡ�

//��仰�൱��Ҫ
`include "name.v"

module datapath(
	 input clk,
    input reset,
	 input [31:0] i_inst_rdata,
	 input [31:0] m_data_rdata,	//I	���ݴ洢���洢����Ӧ����
	 output [31:0] i_inst_addr, //IF����ַ
	 output [31:0] m_data_addr,	 //O ��д��/���������ݴ洢����Ӧ��ַ
    output [31:0] m_data_wdata,	//O	��д�����ݴ洢����Ӧ����
	 output [3:0] m_data_byteen,	//O	��λ�ֽ�ʹ��
	 output [31:0] m_inst_addr, //O	M �� PC
	 
	 output w_grf_we, //GRF����
    output [4:0] w_grf_addr,
    output [31:0] w_grf_wdata,
    output [31:0] w_inst_addr
);
	
	parameter init = 32'h0000_0000;
	
	wire cmp;//�ȽϽ��
	wire [3:0] CMPMode;
	
	wire [31:0] IFPC;
	wire [31:0] IFPC_4;//+4��PC
	wire [31:0] IFPC_8;
	wire [31:0] IFNextPC;
	wire [31:0] IFIR;
	
	wire [31:0] IDPC;
	wire [31:0] IDPC_8;
	wire [31:0] IDIR;
	wire [31:0] IDRD1;
	wire [31:0] IDRD2;
	wire [31:0] IDImm;
	wire [1:0] PCSrc;//�����źŲ���Ҫ��ˮǰ�治����ˮ�߼Ĵ�������
	wire [1:0] IDRD1Sel;
	wire [1:0] IDRD2Sel;
	//wire [31:0] CMPAF;//ѡ�����ź�
	//wire [31:0] CMPBF;
	wire [1:0] ExtOp;
	//wire [1:0] NPCRD1Sel;
	//wire [31:0] NPCRD1F;
	wire [31:0] IDRD1F;
	wire [31:0] IDRD2F;
	wire IDMULDIV_Type;
	wire IDJUMP;

	
	wire [31:0] EXPC_8;
	wire [31:0] EXPC;
	wire [31:0] EXIR;
	wire [31:0] EXRD1;
	wire [31:0] EXRD2;
	wire [31:0] EXImm;//EX��չ����������
	wire [1:0] ALUSrc;
	wire [3:0] ALUCtrl;
	wire [31:0] ALUB;
	wire [1:0] EXRD1Sel;
	wire [1:0] EXRD2Sel;
	wire [31:0] EXALUOut;
	wire EXRegWrite;
	wire [4:0] EXA3;
	wire [1:0] EXtnew;
	wire [1:0] EXMemtoReg;
	wire [31:0] EXRD1F;
	wire [31:0] EXRD2F;
	wire [31:0] EXMULDIVOut;
	wire [3:0] MULDIVMode;
	wire HILOSel;
	wire Busy;
	wire Start;
	wire EXJUMP;
	wire EXlwbti;
	
	wire [31:0] MEMPC_8;
	wire [31:0] MEMPC;
	wire [31:0] MEMIR;
	wire [31:0] MEMRD2;
	wire [1:0] MEMRD2Sel;//д��DM������
	wire [31:0] MEMALUOut; //����������Ҫ������ˮ������ѡ��
	wire [31:0] MEMRD;
	wire MemWrite;
	wire MEMRegWrite;
	wire [4:0] MEMA3;
	wire [1:0] MEMtnew;
	wire [1:0] MEMMemtoReg;
	wire [31:0] MEMRD2F;//�����滻����ȷ��
	wire [3:0] DMMode;
	wire [31:0] MEMMULDIVOut;
	//����ѡ���RD2
	wire MEMJUMP;
	wire MEMlwbti;
	
	wire [31:0] WBPC;
	wire [31:0] WBPC_8;
	wire [31:0] WBIR;//Instr
	wire [31:0] WBALUOut;
	wire [31:0] WBRD;//memdataout
	wire [31:0] WD;//����д������
	wire [4:0] WBA3;
	wire [1:0] WBMemtoReg;
	wire WBRegWrite;
	wire [1:0] WBtnew;
	wire [31:0] WBMULDIVOut;
	wire WBJUMP;
	
	wire Stalk; //��ͣ�ź�
	wire [1:0] tuse_rs;
	wire [1:0] tuse_rt;
	
	//ת��������ѡ��
	wire [31:0] EXTRSrc;
	wire [31:0] MEMTRSrc;
	//��������ת����Ŀ�Ĳ�Ӧ���ǽ���Ϊģ���ṩ��ȷ���ݣ���Ӧ�ǰ� rsOut �� rtOut ������ȷ��
	
	
	//I preprocess 
	assign IFIR = i_inst_rdata;//���� //IM
	//assign MEMRD = m_data_rdata;
	//O
	assign i_inst_addr = IFPC; 
	assign m_data_addr =  MEMALUOut;//DM
	//assign m_data_wdata = MEMRD2F;
	//assign m_data_byteen = DMMode;//��λ�ֽ�ʹ��
	assign m_inst_addr = MEMPC;//M �� PC
	assign w_grf_we = WBRegWrite; //WB write enable
	assign w_grf_addr = WBA3; // WB write addr
	assign w_grf_wdata = WD;//WB write Data
	assign w_inst_addr = WBPC;//PC
	
	//�����ⲿ
	BE BE(
	.RD2(MEMRD2F),
	.MemWrite(MemWrite), //I
	.MEMALUOut(MEMALUOut), //I
	.DMMode(DMMode),
	.m_data_rdata(m_data_rdata),
	.m_data_byteen(m_data_byteen), //O
	.MEMRD(MEMRD), //O
	.m_data_wdata(m_data_wdata)
	);
	
	mux4 mux4EXTRSrc( //ѡ���źſ����ø�����MemtoRegʵ��
		.x0(init),
		.x1(init),
		.x2(EXPC_8),
		.x3(init),
		.sel(EXMemtoReg),
		.result(EXTRSrc)
	); //��ǰ���� source��ѡ��
	mux4 mux4MEMTRSrc(
		.x0(MEMALUOut),
		.x1(init),
		.x2(MEMPC_8),
		.x3(MEMMULDIVOut),
		.sel(MEMMemtoReg),
		.result(MEMTRSrc)//ת����ѡ��
	);

	PCcalculate PCcalculate( //�в�ȷ��������������Ⱥ�
	.PC(IDPC),
	.Instr(IDIR),
	.order(IFPC_4),
	.Imm(IDImm), 
	.RD1(IDRD1F), //IF������ID����PC
	.cmp(cmp), 
	.PCSrc(PCSrc),
	.NextPC(IFNextPC)
	);//�ֲ�ʽ��������ź�������ˮ
	
	pc pc(
	.clk(clk), 
	.reset(reset), 
	.next_pc(IFNextPC), 
	.Stalk(Stalk),
	.pc(IFPC)
	);
	
	adder IFadder_4(
	.A(IFPC),
	.B(32'h0000_0004),
	.out(IFPC_4)
	);//generate IFPC_4
	
	adder IFadder_8(
	.A(IFPC),
	.B(32'h0000_0008),
	.out(IFPC_8)
	);//generate IFPC_8
	
	//�ļ���ˮ�߼Ĵ���->�弶��ˮ��
	
	//ID
	DecodeReg UutDecodeReg(
	.clk(clk),
	.reset(reset),
	.NextIDIR(IFIR),
	.NextIDPC_8(IFPC_8),
	.NextIDPC(IFPC),
	.Stalk(Stalk),
	.IDIR(IDIR),
	.IDPC_8(IDPC_8),//��һ�׶ε�������� ��������չ
	.IDPC(IDPC)
	//������ˮ�߼Ĵ��������ṩ���ݵ���ˮ���ļ���������� D ����ˮ�߼Ĵ�����ǰһ��Ϊ F ��������һ��Ϊ D ����
    );
	 
	 //GRF�����г� ->�漰ID��WB
	grf GRF(
	.clk(clk),
	.reset(reset),
	.WE(WBRegWrite),
	.A1(IDIR[25:21]),
	.A2(IDIR[20:16]),
	.A3(WBA3),
	.WD(WD),
	.pc(WBPC),
	.RD1(IDRD1), 
	.RD2(IDRD2)
	);
	
	controller controllerDe(
	.cmp(cmp),
	.Instr(IDIR), //ע����ID��ָ��
	.PCSrc(PCSrc),
	.ExtOp(ExtOp),
	.CMPMode(CMPMode),
	.Level(`Level_ID),
	.tuse_rs(tuse_rs),
	.tuse_rt(tuse_rt),
	.MULDIV_Type(IDMULDIV_Type),
	.JUMPOut(IDJUMP)
	);
	
	mux4 mux4IDRD1Sel(
	.x0(IDRD1),
	.x1(WD), //����ԽС�����ȼ�Խ��
	.x2(MEMTRSrc),//MEM������ALUOut��RD
	.x3(EXTRSrc),
	.sel(IDRD1Sel),
	.result(IDRD1F)
	);
	

	mux4 mux4IDRD2Sel(
	.x0(IDRD2), //���ȼ��ӵ͵���
	.x1(WD),
	.x2(MEMTRSrc),//MEM������ALUOut��RD
	.x3(EXTRSrc),
	.sel(IDRD2Sel), 
	.result(IDRD2F)
	);
	
	Comparator Comparator(
	.A(IDRD1F), 
	.B(IDRD2F), 
	.CMPMode(CMPMode),
	.cmp(cmp)
	);
	
	extender EXT(
	.Instr(IDIR),
	.IDPC(IDPC), //�������㣨��Ȼʹ��ʱ�����
	.ExtOp(ExtOp), //Mode ѡ��
	.out(IDImm) //also u
   );//ͨ����
	
	//EX
	ExecuteReg UutExecuteReg(
	.clk(clk),
	.reset(reset),
	.NextEXPC(IDPC),
	.NextEXPC_8(IDPC_8),
	.NextEXIR(IDIR),
	
	.NextEXImm(IDImm),
	.NextEXRD1(IDRD1F),
	.NextEXRD2(IDRD2F), //֮������ȷ������ RD1��RD2ǧ���д��
	.NextEXJUMP(IDJUMP),
	
	.Stalk(Stalk),
	.EXPC(EXPC),
	.EXPC_8(EXPC_8),
	.EXIR(EXIR), 

	.EXImm(EXImm),
	.EXRD1(EXRD1),
	.EXRD2(EXRD2),
	.EXJUMP(EXJUMP)
   );

	controller controllerEx(
	.JUMP(EXJUMP),
	.cmp(cmp),
	.Instr(EXIR),
	.RegWrite(EXRegWrite),
	.ALUSrc(ALUSrc),
	.ALUCtrl(ALUCtrl),
	.Level(`Level_EX),
	.tnew(EXtnew),
	.A3(EXA3),
	.MemtoReg(EXMemtoReg),
	.MULDIVMode(MULDIVMode),
	.HILOSel(HILOSel),
	.lwbti(EXlwbti)
	);
	
	mux4 mux4EXRD1Sel(
	.x0(EXRD1),
	.x1(WD), //��CMP��һ���� but NPC is quite different, need a new type of coding
	.x2(MEMTRSrc), //MEM������ALUOut��RD
	.x3(init),
	.sel(EXRD1Sel),
	.result(EXRD1F)
	);
	
	mux4 mux4EXRD2Sel(
	.x0(EXRD2),
	.x1(WD),
	.x2(MEMTRSrc),//MEM������ALUOut��RD
	.x3(init),
	.sel(EXRD2Sel),
	.result(EXRD2F)
	);
	
	mux4 mux4_ALUSrc(
	.x0(EXRD2F),
	.x1(EXImm),
	.x2(init),
	.x3(init), //��ʱ����
	.sel(ALUSrc),
	.result(ALUB)
	);
	
	alu ALU(
	.A(EXRD1F),
	.B(ALUB),
	.ALUCtrl(ALUCtrl),
	.result(EXALUOut)
	);
	
	muldiv MULDIV(
	.A(EXRD1F),
	.B(ALUB), //�ӿڴ󲿷�ͬALU
	.mode(MULDIVMode),
	.HILOSel(HILOSel),
	.clk(clk),
	.reset(reset),
	.out(EXMULDIVOut),
	.Busy(Busy),
	.Start(Start)
);
	
	//MEM
	MemoryReg UutMemoryReg(
	.clk(clk),
	.reset(reset),
	.NextMEMALUOut(EXALUOut),
	.NextMEMPC_8(EXPC_8),
	.NextMEMPC(EXPC),
	.NextMEMIR(EXIR),
	.NextMEMRD2(EXRD2F),
	.NextMEMMULDIVOut(EXMULDIVOut),
	.NextMEMJUMP(EXJUMP),
	
	.MEMPC_8(MEMPC_8),
	.MEMPC(MEMPC),
	.MEMIR(MEMIR),
	.MEMRD2(MEMRD2),
	.MEMALUOut(MEMALUOut),
	.MEMMULDIVOut(MEMMULDIVOut),
	.MEMJUMP(MEMJUMP)
   );
	
	controller controllerMem(
	.cmp(cmp),
	.JUMP(MEMJUMP),
	.Instr(MEMIR), //IR : Instr
	.RegWrite(MEMRegWrite),
	.MemWrite(MemWrite),
	.Level(`Level_MEM),
	.tnew(MEMtnew),
	.A3(MEMA3),
	.MemtoReg(MEMMemtoReg),
	.DMMode(DMMode),
	.lwbti(MEMlwbti)
	);
	
	mux4 mux4_MEMRD2Sel(//only data in WB will help
	.x0(MEMRD2),
	.x1(WD), //WB//MEM������ALUOut��RD
	//.x2(IDRD2),
	.x2(init),//�����е�С����
	.x3(init),
	.sel(MEMRD2Sel), //��ϰP5����ͣת��
	.result(MEMRD2F)
	);
	
	//WB
	WriteBackReg UutWriteReg(
	.clk(clk),
	.reset(reset),
	.NextWBIR(MEMIR),
	.NextWBRD(MEMRD),
	.NextWBPC(MEMPC),
	.NextWBPC_8(MEMPC_8),
	.NextWBALUOut(MEMALUOut),
	.NextWBMULDIVOut(MEMMULDIVOut),
	.NextWBJUMP(MEMJUMP),
	
	.WBIR(WBIR),
	.WBRD(WBRD),
	.WBPC(WBPC),
	.WBPC_8(WBPC_8),
	.WBALUOut(WBALUOut),
	.WBMULDIVOut(WBMULDIVOut), //��ˮ����
	.WBJUMP(WBJUMP)
   );
	controller controllerWB(
	.cmp(cmp),
	.JUMP(WBJUMP),
	.RD(WBRD), //MEM�����Ľ��
	.Instr(WBIR),
	.RegWrite(WBRegWrite), //WE
	.MemtoReg(WBMemtoReg),//sel
	.A3(WBA3),//WBA3
	.Level(`Level_WB),
	.tnew(WBtnew)
	);
	
	mux4 mux4_MemtoReg( //generateWriteData //modified
	.x0(WBALUOut),
	.x1(WBRD),
	.x2(WBPC_8),
	.x3(WBMULDIVOut), //ѡ���ת��
	.sel(WBMemtoReg), //��дMemtoReg Selection
	.result(WD)
	);
	
	//ð�մ���ģ�飺ת������ͣ
	Hcontroller Hcontroller(
	.IDInstr(IDIR),
	.EXInstr(EXIR),
	.MEMInstr(MEMIR),
	.WBInstr(WBIR),
	
	.EXRegWrite(EXRegWrite),
	.MEMRegWrite(MEMRegWrite),
	.WBRegWrite(WBRegWrite),
	
	.EXA3(EXA3),
	.MEMA3(MEMA3),
	.WBA3(WBA3),
	
	.EXtnew(EXtnew),
	.MEMtnew(MEMtnew),
	.WBtnew(WBtnew), //tnew = 2'b00���ϲ��������ݣ���������û�й����ԣ�����û��������
	.IDMULDIV_Type(IDMULDIV_Type),
	.EXlwbti(EXlwbti),
	.MEMlwbti(MEMlwbti),
	
	.Busy(Busy),
	.Start(Start),
	
	.IDRD1Sel(IDRD1Sel),
	.IDRD2Sel(IDRD2Sel),
	.EXRD1Sel(EXRD1Sel),
	.EXRD2Sel(EXRD2Sel),
	.MEMRD2Sel(MEMRD2Sel),
	//.NPCRD1Sel(NPCRD1Sel),
	.Stalk(Stalk),
	.tuse_rs(tuse_rs),
	.tuse_rt(tuse_rt)
);

endmodule
