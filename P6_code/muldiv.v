`include "name.v"
module muldiv(
	input [31:0] A,
	input [31:0] B,
	input [3:0] mode,
	input HILOSel,
	input clk,
	input reset,
	output[31:0] out,
	output reg Busy,
	output reg Start
);
	initial begin
		Busy = 1'b0;
		Start = 1'b0;
	end
	parameter init_64 = 64'd0;
	parameter init_32 = 32'd0;
	reg [31:0] LO = init_32;
	reg [31:0] HI = init_32;//hi/lo寄存器
	reg [63:0] ans = init_64; //4 32_bit 
	reg [3:0] cnt = 4'd0; //counter
	wire [63:0] _div;
	assign _div = {$signed(A) % $signed(B),$signed(A) / $signed(B)};
	always @(*) begin
			case(mode)
				`MULDIVMode_MULT: begin
					Start = 1'b1;
				end
				`MULDIVMode_MULTU: begin
					Start = 1'b1;
				end
				`MULDIVMode_DIV: begin
					Start = 1'b1;
				end
				`MULDIVMode_DIVU: begin
					Start = 1'b1;
				end
				`MULDIVMode_FDIV:  begin
					Start = 1'b1;
				end
				default: begin	
					Start = 1'b0;
				end
			endcase
	end //组合逻辑
	
	always @(posedge clk) begin //同步复位 //时序逻辑，状态转移，寄存器赋值
		if (reset == 1'b1) begin
			cnt <= 4'd0;//计数器清零
			Busy <= 1'b0;
		end else begin
			if (Start == 1'b1) begin
				case(mode)
					`MULDIVMode_MULT: begin
						ans <= $signed(A) * $signed(B);
						cnt <= 4'd4; //5 - 1
					end
					`MULDIVMode_MULTU: begin
						ans <= A * B;
						cnt <= 4'd4;//10 - 1
					end
					`MULDIVMode_DIV: begin
						ans[31:0] <= (B == 0) ? LO : _div[31:0]; //对照mars中的行为行为建模
						ans[63:32] <= (B == 0) ? HI : _div[63:32]; //fraction //注意三目运算符符号转化
						cnt <= 4'd9;
					end
					`MULDIVMode_DIVU: begin
						ans[31:0] <= (B == 0) ? LO : A / B;
						ans[63:32] <= (B == 0) ? HI : A % B; //不改动寄存器
						cnt <= 4'd9;
					end
					`MULDIVMode_FDIV: begin
						ans[31:0] <= (B == 0) ? LO : _div[31:0]; //类似div
						ans[63:32] <= (B == 0) ? HI : _div[63:32];
						cnt <= 4'd2;//4'd9 - 1
					end
					default: begin	
						ans <= ans; //not 清空
				end
			endcase
		end else begin //没有计算的话
				case(mode)
					`MULDIVMode_MTHI: begin
						HI <= A;//rs
					end
					`MULDIVMode_MTLO: begin
						LO <= A;//rs
					end 
					default: begin
						LO <= (cnt > 4'd0 || Start ) ? ans[31:0] : LO; //正在运算就刷新，否则不刷新
						HI <= (cnt > 4'd0 || Start ) ? ans[63:32] : HI; //刷新结果
					end
				endcase
				cnt <= (cnt > 4'd0) ? cnt - 4'd1 : 4'd0; //非阻塞赋值
			end
		end
		if (cnt > 4'd0 || Start ) begin //STATE MATHINE 
			Busy <= 1'b1;
		end else begin
			Busy <= 1'b0;
		end
	end
	assign out = (HILOSel == `MULDIV_HIGH) ? HI : LO ;//选择输出信号//宏定义千万别加分号	
endmodule 