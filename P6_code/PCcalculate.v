`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:24:44 11/02/2022 
// Design Name: 
// Module Name:    PCcalculate 
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
module PCcalculate(
	input [31:0] PC,
	input [31:0] Instr,
	input [31:0] order, //IFPC_4 = IDPC_8 delayed branch
	input [31:0] Imm,
	input [31:0] RD1,
	input cmp,
	input [1:0] PCSrc, //��λpcѡ��
	output [31:0] NextPC
    );
	wire [31:0] jr;
	wire [31:0] jal;
	wire [31:0] branch = PC + (Imm << 2) + 4; //order = PC + 4 //not too modulized ע��beq�Ǳ�����PC���б仯
	assign jr = RD1;
	assign jal = {PC[31:28], Instr[25:0], 2'b00};	
	wire [31:0] b_jump; //beq //�����ʵ����ӿ���չ
	//reg PC_8 = order + 4;
	
	mux2 mux2_1(.x0(order), .x1(branch), .sel(cmp), .result(b_jump)); //����PC + 8 //����Ҫ
	mux4 mux4_1(.x0(order), .x1(b_jump), .x2(jal), .x3(jr), .sel(PCSrc), .result(NextPC));
endmodule
