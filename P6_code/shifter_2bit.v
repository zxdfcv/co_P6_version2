`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:13:06 11/03/2022 
// Design Name: 
// Module Name:    shifter_2bit 
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
module shifter_2bit(
	input [31:0] in ,
	output [31:0] out
    );
	 
	assign out = (in << 2); //无符号左移两位，用于beq操作

endmodule
