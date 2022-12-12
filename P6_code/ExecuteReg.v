`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:22:46 11/06/2022 
// Design Name: 
// Module Name:    EXecuteReg 
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
module ExecuteReg(
	//input
	input clk,
	input reset,
	input [31:0] NextEXPC,
	input [31:0] NextEXPC_8,
	input [31:0] NextEXIR,

	input [31:0] NextEXImm,
	input [31:0] NextEXRD1,
	input [31:0] NextEXRD2,
	input NextEXJUMP,
	input Stalk,

	output reg [31:0] EXPC,
	output reg [31:0] EXPC_8, //预先算好PC8
	output reg [31:0] EXIR, 

	output reg [31:0] EXImm,
	output reg [31:0] EXRD1,
	output reg [31:0] EXRD2,
	output reg EXJUMP
   );
	parameter init = 32'h0000_0000;//注意参数
	always@(posedge clk) begin //同步复位
		if (reset == 1'b1) begin
			EXPC <= 32'h0000_0000;
			EXPC_8 <= 32'h0000_0000;
			EXIR <= 32'h0000_0000;
			EXImm <= 32'h0000_0000;
			EXRD1 <= 32'h0000_0000;
			EXRD2 <= 32'h0000_0000;
			EXJUMP <= 1'b0;
		end else begin
			if (Stalk != 1'b1) begin //Stalk大写
				EXPC_8 <= NextEXPC_8;
				EXPC <= NextEXPC;
				EXIR <= NextEXIR;
				EXImm <= NextEXImm;
				EXRD1 <= NextEXRD1;
				EXRD2 <= NextEXRD2;
				EXJUMP <= NextEXJUMP;
			end else begin
				EXPC <= 32'h0000_0000;
				EXPC_8 <= 32'h0000_0000;
				EXIR <= 32'h0000_0000;
				EXImm <= 32'h0000_0000;
				EXRD1 <= 32'h0000_0000;
				EXRD2 <= 32'h0000_0000; //插入nop
				EXJUMP <= 1'b0;
			end
		end
	
	end

endmodule
