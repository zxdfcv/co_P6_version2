`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:23:02 11/06/2022 
// Design Name: 
// Module Name:    MEMoryReg 
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
module MemoryReg( //分开流水
	input clk,
	input reset,
	input [31:0] NextMEMALUOut,
	input [31:0] NextMEMPC_8,
	input [31:0] NextMEMPC,
	input [31:0] NextMEMIR,
	input [31:0] NextMEMRD2,
	input [31:0] NextMEMMULDIVOut,
	input NextMEMJUMP,
	
	output reg [31:0] MEMPC,
	output reg [31:0] MEMPC_8,
	output reg [31:0] MEMIR,
	output reg [31:0] MEMRD2,
	output reg [31:0] MEMALUOut,
	output reg [31:0] MEMMULDIVOut,
	output reg MEMJUMP
    );
	parameter init = 32'h0000_0000;//可以加一个头文件装载所有的参数
	always@(posedge clk) begin
		if (reset == 1'b1) begin
			MEMPC_8 <= init;
			MEMPC <= init;
			MEMIR <= init;
			MEMRD2 <= init;
			MEMALUOut <= init;
			MEMJUMP <= 1'b0;
			MEMMULDIVOut <= init;
		end else begin
			MEMPC <= NextMEMPC;
			MEMPC_8 <= NextMEMPC_8;//PC + 4
			MEMIR <= NextMEMIR;
			MEMRD2 <= NextMEMRD2;
			MEMALUOut <= NextMEMALUOut;
			MEMMULDIVOut <= NextMEMMULDIVOut;
			MEMJUMP <= NextMEMJUMP;
		end
	end

endmodule
