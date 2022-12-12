`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:23:25 11/06/2022 
// Design Name: 
// Module Name:    WriteBackReg 
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
module WriteBackReg(
	input clk,
	input reset,
	input [31:0] NextWBIR,
	input [31:0] NextWBRD,
	input [31:0] NextWBPC,
	input [31:0] NextWBPC_8,
	input [31:0] NextWBALUOut,
	input [31:0] NextWBMULDIVOut,
	input NextWBJUMP,
	
	output reg [31:0] WBIR,
	output reg [31:0] WBRD,
	output reg [31:0] WBPC,
	output reg [31:0] WBPC_8,
	output reg [31:0] WBALUOut,
	output reg [31:0] WBMULDIVOut,
	output reg WBJUMP
    );
	parameter init = 32'h0000_0000;
	always@(posedge clk) begin
		if (reset == 1'b1) begin
			WBIR <= init;
			WBRD <= init;
			WBPC <= init;
			WBPC_8 <= init;
			WBALUOut <=  init;
			WBMULDIVOut <= init;
			WBJUMP  <= 1'b0;
		end else begin
			WBIR <= NextWBIR;
			WBRD <= NextWBRD;
			WBPC <= NextWBPC;
			WBPC_8 <= NextWBPC_8;
			WBALUOut <= NextWBALUOut;
			WBMULDIVOut <= NextWBMULDIVOut;
			WBJUMP <= NextWBJUMP;
		end
	end

endmodule
