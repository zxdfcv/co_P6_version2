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
	 input [31:0] m_data_rdata,	//I	数据存储器存储的相应数据
	 output [31:0] i_inst_addr, //IF级地址
	 output [31:0] m_data_addr,	 //O 待写入/读出的数据存储器相应地址
    output [31:0] m_data_wdata,	//O	待写入数据存储器相应数据
	 output [3:0] m_data_byteen,	//O	四位字节使能
	 output [31:0] m_inst_addr,	//O	M 级 PC

    output w_grf_we, //GRF数据
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
	); // 连接数据通路 子模块链接
endmodule
