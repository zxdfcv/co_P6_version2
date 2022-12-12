`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:22:14 11/06/2022 
// Design Name: 
// Module Name:    DecodeReg 
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
module DecodeReg(
	input clk,
	input reset,
	input [31:0] NextIDIR,
	input [31:0] NextIDPC_8,
	input [31:0] NextIDPC,
	input Stalk,
	//input Trans,//transfer signal
	output reg [31:0] IDIR,
	output reg [31:0] IDPC_8,//��һ�׶ε�������� ��������չ
	output reg [31:0] IDPC
	//������ˮ�߼Ĵ��������ṩ���ݵ���ˮ���ļ���������� D ����ˮ�߼Ĵ�����ǰһ��Ϊ F ��������һ��Ϊ D ����
    );
	parameter init = 32'h0000_0000;//������PC��ʼֵӦ��Ϊ32'h0000_3000���������ﲻ�ᱻ�õ������Կ��Բ��ùܣ�IRҪ�ã��Ͳ�����
	always@(posedge clk) begin//��Ҫ����ģ�黯�Ͳ�λ���ơ������ļ�Ϊ mips.v����Ч�������ź�Ҫ������ҽ�����ͬ����λ�ź� reset��ʱ���ź� clk��ע��ͬ����λ������
		if (reset == 1'b1) begin
			IDIR <= init;
			IDPC <= init;
			IDPC_8 <= init;//����PCͳһ��
		end else begin //����PC��������⴦��
			if (Stalk != 1'b1) begin //��ͣ��ʱ������ӳٲ�
				//if (Trans == 1'b0) begin
				IDIR <= NextIDIR;
				IDPC <= NextIDPC;
				IDPC_8 <= NextIDPC_8;
				/*end else begin
					IDIR <= init;//����nop
					IDPC <= init;
					IDPC_8 <= init;//����PCͳһ��
				end
				*/
			end else begin //���ݲ���,���⸲��
				IDIR <= IDIR;
				IDPC <= IDPC;
				IDPC_8 <= IDPC_8;//����PCͳһ��
				//$display("IDIR:%h", IDIR);
			end
		end
	end
endmodule
