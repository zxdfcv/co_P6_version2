`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:45:36 11/16/2022 
// Design Name: 
// Module Name:    MemOp 
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

module swByteenGen(
	input [31:0] Addr,
	output [3:0] swByteen
    );
	assign swByteen = 4'b1111;
endmodule

module sbByteenGen(
	input [31:0] Addr,
	input [31:0] RD2,
	output [3:0] sbByteen,
	output [31:0] sbWData
    );
	assign sbByteen = (Addr[1:0] == 2'd0) ?  4'b0001 : 
							(Addr[1:0] == 2'd1) ?  4'b0010 : 
							(Addr[1:0] == 2'd2) ?  4'b0100 : 
							(Addr[1:0] == 2'd3) ?  4'b1000 : 
							4'b0000;
	assign sbWData = (Addr[1:0] == 2'd0) ?  {24'd0, RD2[7:0]} : 
							(Addr[1:0] == 2'd1) ?  {16'd0, RD2[7:0], 8'd0} : 
							(Addr[1:0] == 2'd2) ?  {8'd0, RD2[7:0], 16'd0} : 
							(Addr[1:0] == 2'd3) ?  {RD2[7:0], 24'd0} : 
							4'b0000;
endmodule

module shByteenGen(
	input [31:0] Addr,
	input [31:0] RD2,
	output [3:0] shByteen,
	input [31:0] shWData
    );
	assign shByteen = (Addr[1]) ? 4'b1100 : 4'b0011;
	assign shWData = (Addr[1]) ? {RD2[15:0], 16'd0} : {16'd0, RD2[15:0]};
endmodule

module lbgen(
	input [31:0] DMWord, //
	input [1:0] Byte, //字节选择线
	output [31:0] lbData
    );
	wire [7:0] low;
	assign low = (Byte == 2'b00) ? DMWord[7:0] : 
						(Byte == 2'b01) ? DMWord[15:8] : 
						(Byte == 2'b10) ? DMWord[23:16] : 
						(Byte == 2'b11) ? DMWord[31:24] : 
					8'h00;//error
	assign lbData = {{24{low[7:7]}}, low};//线路拼接
endmodule

module lbugen(
	input [31:0] DMWord, //
	input [1:0] Byte, //字节选择线
	output [31:0] lbuData
    );
	wire [7:0] low;
	assign low = (Byte == 2'b00) ? DMWord[7:0] : 
						(Byte == 2'b01) ? DMWord[15:8] : 
						(Byte == 2'b10) ? DMWord[23:16] : 
						(Byte == 2'b11) ? DMWord[31:24] : 
					8'h00;//error
	assign lbuData = {24'h00_0000, low};//线路拼接
endmodule

module lhgen(
	input [31:0] DMWord, //
	input Byte_1, //字节选择线
	output [31:0] lhData
    );
	wire [15:0] low;
	assign low = (Byte_1 == 1'b0) ? DMWord[15:0] : 
						(Byte_1 == 1'b1) ? DMWord[31:16] : 
						16'h0000;//error
	assign lhData = {{16{low[15:15]}}, low};//线路拼接
endmodule

module lhugen(
	input [31:0] DMWord, //
	input Byte_1, //字节选择线
	output [31:0] lhuData
   );
	wire [15:0] low;
	assign low = (Byte_1 == 1'b0) ? DMWord[15:0] : 
						(Byte_1 == 1'b1) ? DMWord[31:16] : 
						16'h0000;//error
	assign lhuData = {16'h0000, low};//线路拼接
endmodule