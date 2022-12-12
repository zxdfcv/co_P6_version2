`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:02:53 11/11/2022 
// Design Name: 
// Module Name:    Comparator 
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
`include "name.v"
module Comparator(
	input [31:0] A,
	input [31:0] B,
	input [3:0] CMPMode,
	output cmp
    );
	bpnal bpnal(.A(A), .ans(_bpnal));
	assign cmp = (CMPMode == `CMPMode_NOTEQUAL) ? (A != B) :
			//(CMPMode == `CMPMode_NOTEQUALZ) ? (A != 32'd0) :
			(CMPMode == `CMPMode_NOTEQUALZ) ? _bpnal  :
			(A == B);//`CMPMode_EQUAL

endmodule

module bpnal(
	input [31:0] A,
	output reg ans
);
integer i;
always@(*) begin
	ans = 1;
	for (i = 0; i < 16; i = i + 1) begin
		if (A[i] == A[31 - i] && ans) begin
			ans = ans;
		end else begin
			ans = 0;
		end
	end
end

endmodule
