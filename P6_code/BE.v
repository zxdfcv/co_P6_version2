`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:45:52 10/29/2022 
// Design Name: 
// Module Name:    dm 
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
module BE(
	input [31:0] RD2,
	input MemWrite, //I
	input [31:0] MEMALUOut, //I Addr
	input [3:0] DMMode,//I
	input [31:0] m_data_rdata, //I DM读出的数据
	output [3:0] m_data_byteen, //O
	output [31:0] MEMRD, //O
	output [31:0] m_data_wdata
);
	parameter init = 32'd0;
	wire [3:0] swByteen;
	wire [3:0] sbByteen;
	wire [3:0] shByteen;
	wire [31:0] lbData;
	wire [31:0] lhData;
	wire [31:0] lhuData;
	wire [31:0] lbuData;
	//wire [31:0] swWData;
	wire [31:0] shWData;
	wire [31:0] sbWData;

		//special lb, sb
	lbgen lbgen(
	.DMWord(m_data_rdata),
	.Byte(MEMALUOut[1:0]), 
	.lbData(lbData)
	);	
	
		
	lbugen lbugen(
	.DMWord(m_data_rdata),
	.Byte(MEMALUOut[1:0]),
	.lbuData(lbuData)
	);
	
	lhgen lhgen(
	.DMWord(m_data_rdata), //
	.Byte_1(MEMALUOut[1:1]), //字节选择线
	.lhData(lhData)
    );

	lhugen lhugen(
	.DMWord(m_data_rdata), //
	.Byte_1(MEMALUOut[1:1]), //字节选择线
	.lhuData(lhuData)
   );

	sbByteenGen sbByteenGen(
	.Addr(MEMALUOut),
	.RD2(RD2),
	.sbByteen(sbByteen),
	.sbWData(sbWData)
	);
	
	shByteenGen shByteenGen(
	.Addr(MEMALUOut),
	.RD2(RD2),
	.shByteen(shByteen),//fixed
	.shWData(shWData) //
   );
	 
	swByteenGen swByteenGen(
	.Addr(MEMALUOut),
	.swByteen(swByteen)
   );
	 
	mux16 mux16_DataOut(
		.x0(m_data_rdata), 
		.x1(lbData), 
		.x2(lhData),
		.x3(lbuData),
		.x4(lhuData),
		.x5(init),
		.x6(init),
		.x7(init),
		.x8(init),
		.x9(init),
		.x10(init),
		.x11(init),
		.x12(init),
		.x13(init),
		.x14(init),
		.x15(init),
		.sel(DMMode), 
		.result(MEMRD) //选择读出数据
	); //不必过度封装MUX
	
	assign m_data_byteen = (MemWrite == 1'b0) ? 4'd0 : 
								(DMMode == `DMMode_Word) ? swByteen : 
								(DMMode == `DMMode_Half) ? shByteen : 
								(DMMode == `DMMode_Byte) ? sbByteen :
								4'd0;
	assign m_data_wdata = (DMMode == `DMMode_Half) ? shWData : 
								 (DMMode == `DMMode_Byte) ? sbWData :
								 RD2; //default

endmodule 
