`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:15:32 11/11/2022 
// Design Name: 
// Module Name:    name 
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
//R-Type
`define _R  6'b000000
`define ADD 6'b100000
`define SLT 6'b101010
`define SLTU 6'b101011
`define SUB 6'b100010
`define AND 6'b100100
`define OR  6'b100101
`define NOR 6'b100111
`define SLL 6'b000000
`define SRL 6'b000010
`define FDIV 6'b101100 //FUNCT
//non-typital
`define JR 	6'b001000
`define JALR 6'b001001
//I-Type
//I-Cal
`define ORI 6'b001101
`define ANDI 6'b001100
`define LUI 6'b001111
`define SLTI 6'b001010//未实现
`define ADDI 6'b001000
//I-Ld-St
`define LW 	6'b100011
`define SW  6'b101011
`define LW 	6'b100011//I LD&ST
`define SW  6'b101011//I
`define LB 	6'b100000//I
`define SB	6'b101000//I
`define LH 	6'b100001// I
`define SH  6'b101001 //I
`define LBU 6'b100100 //lbu I
`define LHU 6'b100101 //I
`define LWBTI 6'b111000


//I-b-jump
`define BEQ 6'b000100
`define BNE 6'b000101
`define BNEZALC 6'b101100

`define BLTZ 6'b000001//未实现
`define BLTZ1 5'b00000

`define BGEZ 6'b000001//未实现
`define BGEZ1 5'b00001 //opis the same be careful

`define BGTZ 6'b000111
//J-Type
`define J 	6'b000010
`define JAL 6'b000011


//Special MULDIV R-Type
`define MFHI  6'b010000
`define MFLO  6'b010010

`define MULT  6'b011000
`define MULTU 6'b011001
`define DIV   6'b011010
`define DIVU  6'b011011
`define MTHI  6'b010001 
`define MTLO  6'b010011


`define RegDist_rd 2'b00
`define RegDist_rt 2'b01
`define RegDist_$ra 2'b10

`define ALUSrc_rt 2'b00
`define ALUSrc_ExtImm 2'b01

`define MemtoReg_ALUOut 2'b00
`define MemtoReg_MemOut 2'b01 //内存的结果
`define MemtoReg_NowPC 2'b10
`define MemtoReg_MULDIVOut 2'b11

`define RegWrite_Yes 1'b1
`define RegWrite_No 1'b0

`define MemWrite_Yes 1'b1
`define MemWrite_No 1'b0

`define PCSrc_Order 2'b00
`define PCSrc_Beq 2'b01
`define PCSrc_Jal 2'b10
`define PCSrc_Jr 2'b11

`define ExtOp_unsigned 2'b00
`define ExtOp_signed 2'b01
`define ExtOp_high 2'b10 //suitable for high
`define ExtOp_26bit 2'b11 //需要立即数和PC

`define ALUCtrl_ADD 4'b0000
`define ALUCtrl_SUB 4'b0001
`define ALUCtrl_OR 4'b0010
`define ALUCtrl_AND 4'b0011
//0100
//0101
`define ALUCtrl_SLL 4'b0110
`define ALUCtrl_SRL 4'b0111
`define ALUCtrl_EQUAL 4'b1000
`define ALUCtrl_SMALL 4'b1001
`define ALUCtrl_GREAT 4'b1010 //小心无符号数和有符号数！！！verilog默认无符号
`define ALUCtrl_SWC 4'b1011
`define ALUCtrl_SMALLU 4'b1100
//1011

`define DMMode_Word 4'b0000
`define DMMode_Byte 4'b0001
`define DMMode_Half 4'b0010
`define DMMode_ByteU 4'b0011
`define DMMode_HalfU 4'b0100

`define CMPMode_EQUAL 4'b0000
`define CMPMode_NOTEQUAL 4'b0001
`define CMPMode_GREAT 4'b0010 //预留位置
`define CMPMode_SMALL 4'b0011 //预留位置
`define CMPMode_NOTEQUALZ 4'b0100

//冲突应对
`define Level_ID 2'b00
`define Level_EX 2'b01 //这个地方之前有问题，一定要细心
`define Level_MEM 2'b10
`define Level_WB 2'b11

`define DATA_ORIGIN 2'b00
`define DATA_EX 2'b11
`define DATA_MEM 2'b10
`define DATA_WB 2'b01

`define MULDIVMode_NOTHING 4'b0000
`define MULDIVMode_MULT 4'b0001
`define MULDIVMode_MULTU 4'b0010
`define MULDIVMode_DIV 4'b0011
`define MULDIVMode_DIVU 4'b0100
`define MULDIVMode_MTHI 4'b0101
`define MULDIVMode_MTLO 4'b0110
`define MULDIVMode_FDIV 4'b0111 //8 mode available

`define MULDIV_HIGH 1'b1
`define MULDIV_LOW 1'b0