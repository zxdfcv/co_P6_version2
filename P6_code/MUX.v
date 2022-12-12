`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:23:14 11/02/2022 
// Design Name: 
// Module Name:    mux2 
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
module mux2(
	input [31:0] x0,
	input [31:0] x1,
	input sel,
	output [31:0] result
    );//s
	assign result = (sel == 1'b0) ? x0 : 
						(sel == 1'b1) ? x1 :
						32'h0000_0000; //error

endmodule


module mux3(
	input [31:0] x0,
	input [31:0] x1,
	input [31:0] x2,
	input [1:0] sel,
	output [31:0] result
    );
	assign result = (sel == 2'b00) ? x0 : 
						(sel == 2'b01) ? x1 :
						(sel == 2'b10) ? x2 :
						32'h0000_0000; //error

endmodule


module mux3_5bit(
	input [4:0] x0,
	input [4:0] x1,
	input [4:0] x2,
	input [1:0] sel,
	output [4:0] result
    );
	assign result = (sel == 2'b00) ? x0 : 
						(sel == 2'b01) ? x1 :
						(sel == 2'b10) ? x2 :
						5'b00000; //error
endmodule 


module mux4(
	input [31:0] x0,
	input [31:0] x1,
	input [31:0] x2,
	input [31:0] x3,
	input [1:0] sel,
	output [31:0] result
    );
	assign result = (sel == 2'b00) ? x0 : 
						(sel == 2'b01) ? x1 :
						(sel == 2'b10) ? x2 :
						(sel == 2'b11) ? x3 :
						32'h0000_0000; //error

endmodule



module mux8(
	input [31:0] x0,
	input [31:0] x1,
	input [31:0] x2,
	input [31:0] x3,
	input [31:0] x4,
	input [31:0] x5,
	input [31:0] x6,
	input [31:0] x7,
	input [2:0] sel,
	output [31:0] result
    );
	assign result = (sel == 3'b000) ? x0 : 
						(sel == 3'b001) ? x1 :
						(sel == 3'b010) ? x2 :
						(sel == 3'b011) ? x3 :
						(sel == 3'b100) ? x4 :
						(sel == 3'b101) ? x5 :
						(sel == 3'b110) ? x6 :
						(sel == 3'b111) ? x7 :
						32'h0000_0000; //error

endmodule

module mux16(
	input [31:0] x0,
	input [31:0] x1,
	input [31:0] x2,
	input [31:0] x3,
	input [31:0] x4,
	input [31:0] x5,
	input [31:0] x6,
	input [31:0] x7,
	input [31:0] x8,
	input [31:0] x9,
	input [31:0] x10,
	input [31:0] x11,
	input [31:0] x12,
	input [31:0] x13,
	input [31:0] x14,
	input [31:0] x15,
	input [3:0] sel,
	output [31:0] result
    );
	assign result = (sel == 4'b0000) ? x0 : 
						(sel == 4'b0001) ? x1 :
						(sel == 4'b0010) ? x2 :
						(sel == 4'b0011) ? x3 :
						(sel == 4'b0100) ? x4 :
						(sel == 4'b0101) ? x5 :
						(sel == 4'b0110) ? x6 :
						(sel == 4'b0111) ? x7 :
						(sel == 4'b1000) ? x8 :
						(sel == 4'b1001) ? x9 :
						(sel == 4'b1010) ? x10 :
						(sel == 4'b1011) ? x11 :
						(sel == 4'b1100) ? x12 :
						(sel == 4'b1101) ? x13 :
						(sel == 4'b1110) ? x14 :
						(sel == 4'b1111) ? x15 :
						32'h0000_0000; //error

endmodule


module mux16_4bit(
	input [3:0] x0,
	input [3:0] x1,
	input [3:0] x2,
	input [3:0] x3,
	input [3:0] x4,
	input [3:0] x5,
	input [3:0] x6,
	input [3:0] x7,
	input [3:0] x8,
	input [3:0] x9,
	input [3:0] x10,
	input [3:0] x11,
	input [3:0] x12,
	input [3:0] x13,
	input [3:0] x14,
	input [3:0] x15,
	input [3:0] sel,
	output [3:0] result
    );
	assign result = (sel == 4'b0000) ? x0 : 
						(sel == 4'b0001) ? x1 :
						(sel == 4'b0010) ? x2 :
						(sel == 4'b0011) ? x3 :
						(sel == 4'b0100) ? x4 :
						(sel == 4'b0101) ? x5 :
						(sel == 4'b0110) ? x6 :
						(sel == 4'b0111) ? x7 :
						(sel == 4'b1000) ? x8 :
						(sel == 4'b1001) ? x9 :
						(sel == 4'b1010) ? x10 :
						(sel == 4'b1011) ? x11 :
						(sel == 4'b1100) ? x12 :
						(sel == 4'b1101) ? x13 :
						(sel == 4'b1110) ? x14 :
						(sel == 4'b1111) ? x15 :
						4'd0; //error

endmodule
