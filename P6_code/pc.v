`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:19:29 10/29/2022 
// Design Name: 
// Module Name:    pc 
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
module pc(
	input clk,
	input reset,
	input [31:0] next_pc,
	input Stalk,
	output reg [31:0] pc //�洢���ڵ�pc
);
	parameter init = 32'h0000_3000;
	
	always @(posedge clk) begin //ͬ����λ ע�������źŵı仯
		if (reset == 1'b1) begin
			pc <= init;
		end else begin
			if (Stalk == 1'b1) begin
				pc <= pc; //����PC
				//$display("stalk pc:%h", pc);
			end else begin
				pc <= next_pc;
				//$display("next_pc:%h, pc:%h", next_pc, pc);
			end			
		end
	end


endmodule
