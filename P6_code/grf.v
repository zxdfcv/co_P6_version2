`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:20:38 10/29/2022 
// Design Name: 
// Module Name:    grf 
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
module grf(
	input clk,
	input reset,
	input WE,
	input [4:0] A1,
	input [4:0] A2,
	input [4:0] A3,
	input [31:0] WD,
	input [31:0] pc,
	output [31:0] RD1, 
	output [31:0] RD2
    );
	reg [31:0] grf[0:31];
	integer i;
	
	parameter init = 32'h0000_0000;
	always@(posedge clk) begin //同步复位
		//$display("@%h: $%d <= %h", pc, A3, WD);
		//$display("tar:$%d", A1);
		if (reset == 1'b1) begin
			for (i = 0; i < 32; i = i + 1) begin
				grf[i] <= init;
			end
		end else begin //注意坑点：零号寄存器操作无效
			case(WE)
			1'b1: begin 
				if (A3 != 5'd0) begin
					grf[A3] <= WD; //数据写入 
					//$display("%d@%h: $%d <= %h", $time, WPC, Waddr, WData);
				end else begin			
					grf[A3] <= grf[A3];//一直写入0
				end
				//$display("%d@%h: $%d <= %h", $time, pc, A3, WD);
				//$display("@%h: $%d <= %h", pc, A3, WD);
			end
			default: ;
				//$display("@%h: $%d <= %h", pc, A3, WD);
			endcase	
		end
	
	end
	//always@(*) begin
		//$display("tar:$%d, dataOut1 is %h", A1, grf[A1]);
	//end
	assign RD1 = (WE & (A1 == A3) & (A3 != 5'd0)) ? WD : 
			grf[A1];
	assign RD2 = (WE & (A2 == A3) & (A3 != 5'd0)) ? WD : 
			grf[A2]; //输出对应数据
	//寄存器要实现内部转发
endmodule
