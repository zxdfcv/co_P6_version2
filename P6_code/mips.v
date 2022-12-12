`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:32:41 10/29/2022 
// Design Name: 
// Module Name:    mips 
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
module mips(
    input clk,
    input reset,
	 input [31:0] i_inst_rdata,
	 input [31:0] m_data_rdata,	//I	���ݴ洢���洢����Ӧ����
	 output [31:0] i_inst_addr, //IF����ַ
	 output [31:0] m_data_addr,	 //O ��д��/���������ݴ洢����Ӧ��ַ
    output [31:0] m_data_wdata,	//O	��д�����ݴ洢����Ӧ����
	 output [3:0] m_data_byteen,	//O	��λ�ֽ�ʹ��
	 output [31:0] m_inst_addr,	//O	M �� PC

    output w_grf_we, //GRF����
    output [4:0] w_grf_addr,
    output [31:0] w_grf_wdata,
    output [31:0] w_inst_addr 
);
 
	datapath datapath(
	.clk(clk), 
	.reset(reset), 
	.i_inst_addr(i_inst_addr), 
	.m_data_rdata(m_data_rdata),
	.i_inst_rdata(i_inst_rdata),
	.m_data_addr(m_data_addr),
	.m_data_wdata(m_data_wdata),
	.m_data_byteen(m_data_byteen),
	.m_inst_addr(m_inst_addr),
	.w_grf_we(w_grf_we),
	.w_grf_addr(w_grf_addr),
	.w_grf_wdata(w_grf_wdata),
	.w_inst_addr(w_inst_addr)
	); // ��������ͨ· ��ģ������
endmodule
