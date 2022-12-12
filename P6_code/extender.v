`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:45:21 11/02/2022 
// Design Name: 
// Module Name:    extender 
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
module extender( //32_bit
	input [31:0] Instr,
	input [31:0] IDPC,
	input [1:0] ExtOp, //Mode ѡ��
	output [31:0] out
    );//ͨ����
	parameter init = 32'h0000_0000;
	wire [31:0] ans;
	assign out = ans;//ansΪ��չ���
	assign ans = (ExtOp == 2'b00) ? {16'h0000, Instr[15:0]} : 
						(ExtOp == 2'b01) ? {{16{Instr[15:15]}}, Instr[15:0]} : //�����ź�
						(ExtOp == 2'b10) ? {Instr[15:0], 16'h0000} : //��λ��չlui
						init;
endmodule
