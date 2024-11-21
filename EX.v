`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:56:37 11/05/2024 
// Design Name: 
// Module Name:    EX 
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
// `default_nettype none
`include "constants.v"
module EX(
    input wire clk,
    input wire reset,
    input wire [31:0] EX_instr,
    input wire [31:0] EX_imm32,
    input wire [31:0] EX_WD,
    input wire [31:0] EX_RD1_forward,
    input wire [31:0] EX_RD2_forward,
    input wire [4:0] EX_ExcCode,
    output wire [31:0] EX_MEM_RES,
    output wire [31:0] EX_MEM_WD,
    output wire [31:0] EX_MEM_RD2,
    output wire [1:0] EX_NEW,
    output wire MULT_DIV_BUSY,
    output wire MULT_DIV_START,
    output wire [4:0] EX_MEM_ExcCode,
    output wire EX_MTC0
    );

/*---------------------------EX_CTRL,EX区控制信号---------------------------------------*/
    wire [3:0] ALUOp;
    wire ALU_A_Sel;
    wire ALU_B_Sel;
    wire WD_Sel;
    wire [2:0] MULT_DIV_OP;
    wire MTHI;
    wire MTLO;
    wire MFHI;
    wire MFLO;  
    wire MTC0;  
    wire LOAD;
    wire STORE;
    assign EX_MTC0 = MTC0;
    CTRL ex_control(
        .instr(EX_instr),
        .ALUOp(ALUOp),
        .ALU_A_Sel(ALU_A_Sel),
        .ALU_B_Sel(ALU_B_Sel),
        .WD_Sel(WD_Sel),
        .EX_NEW(EX_NEW),
        .MULT_DIV_OP(MULT_DIV_OP),
        .MULT_DIV_START(MULT_DIV_START),
        .MTHI(MTHI),       
        .MTLO(MTLO),
        .MFHI(MFHI),
        .MFLO(MFLO),
        .MTC0(MTC0),
        .LOAD(LOAD),
        .STORE(STORE)
    );

/*---------------------------ALU---------------------------------------*/
    wire [31:0] SrcA;
    wire [31:0] SrcB;
    wire [31:0] ALURes;
    wire overflow;
    assign SrcA = (ALU_A_Sel == 1) ? EX_RD2_forward :  // sll指令
                                    EX_RD1_forward;
    assign SrcB = (ALU_B_Sel == 1) ? EX_imm32 : 
                                    EX_RD2_forward;
    ALU alu(
        .SrcA(SrcA),
        .SrcB(SrcB),
        .ALUOp(ALUOp),
        .ALURes(ALURes),
        .overflow(overflow)
    );

    assign EX_MEM_RES = ALURes;
    assign EX_MEM_WD =  (MFHI == 1) ? HI :
                        (MFLO == 1) ? LO :
                        (WD_Sel == 1) ? EX_WD :
                        (MTC0 == 1) ? SrcB :
                        ALURes;
    assign EX_MEM_RD2 = EX_RD2_forward;

/*----------------------------MULT_DIV乘除模块------------------------------------------------*/
    wire busy;
    wire [31:0] HI;
    wire [31:0] LO;
    MULT_DIV mult_div(
        .clk(clk),
        .reset(reset),
        .A(EX_RD1_forward),
        .B(EX_RD2_forward),
        .start(MULT_DIV_START),
        .MULT_DIV_OP(MULT_DIV_OP),
        .busy(busy),
        .HI(HI),
        .LO(LO),
        .MTHI(MTHI),
        .MTLO(MTLO) 
    );

    assign MULT_DIV_BUSY = busy;
    assign EX_MEM_ExcCode = (EX_ExcCode != 5'b0) ? EX_ExcCode :
                            /*load 型指令	计算地址时加法溢出。*/
                            (overflow && LOAD) ? `AdEL :
                            /*store 型指令	计算地址加法溢出。*/
                            (overflow && STORE) ? `AdES :
                            /*算术溢出。*/
                            (overflow) ? `Ov :
                            5'd0;
endmodule
