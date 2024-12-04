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
    input wire req,
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
    wire [1:0] MEM_PART;
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
        .STORE(STORE),
        .MEM_PART(MEM_PART)
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
        .req(req),
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

    // 地址未对齐
    wire [31:0] addr = ALURes;
    wire NOT_ALIGN = (MEM_PART == `memWord && addr[1:0] != 2'b00)
                    || (MEM_PART == `memHalf && addr[0] != 1'b0);
    wire AdEL = /*lw取数地址未与 4 字节对齐。lh取数地址未与 2 字节对齐。*/
                (LOAD && NOT_ALIGN) || 
                 /*lh,lb取Timer寄存器的值。*/
                (LOAD && (MEM_PART == `memHalf || MEM_PART == `memByte) && 
                    ((addr >= 32'h7f00 && addr <= 32'h7f0b) || (addr >= 32'h7f10 && addr <= 32'h7f1b))) ||
                /*load 型指令	取数地址超出 DM、Timer0、Timer1、中断发生器的范围。*/
                (LOAD && !((addr >= 32'h0000 && addr <= 32'h2fff)
                        || (addr >= 32'h7f00 && addr <= 32'h7f0b) 
                        || (addr >= 32'h7f10 && addr <= 32'h7f1b)
                        || (addr >= 32'h7f20 && addr <= 32'h7f23)) )     ||
                /*load 型指令	计算地址时加法溢出。*/
                (overflow && LOAD)           
                ? 1 : 0;
    wire AdES = /*sw存数地址未 4 字节对齐。sh存数地址未 2 字节对齐。*/
                (STORE && NOT_ALIGN) ||
                // /*sh, sb存 Timer 寄存器的值。*/
                (STORE && (MEM_PART == `memHalf || MEM_PART == `memByte) 
                    && ((addr >= 32'h7f00 && addr <= 32'h7f0b) || (addr >= 32'h7f10 && addr <= 32'h7f1b))) ||
                /*store 型指令向计时器的Count寄存器存值。*/
                (STORE && (addr  == 32'h7f08 || addr == 32'h7f18)) ||
                /*store 型指令存数地址超出 DM、Timer0、Timer1、中断发生器的范围。*/
                (STORE && !((addr >= 32'h0000 && addr <= 32'h2fff) 
                         || (addr >= 32'h7f00 && addr <= 32'h7f0b) 
                         || (addr >= 32'h7f10 && addr <= 32'h7f1b)
                         || (addr >= 32'h7f20 && addr <= 32'h7f23)))  ||
                /*store 型指令	计算地址加法溢出。*/
                (overflow && STORE)
                ? 1 : 0;
    assign EX_MEM_ExcCode = (EX_ExcCode != 5'b0) ? EX_ExcCode :
                            AdEL ? `AdEL :
                            AdES ? `AdES :
                            /*算术溢出。*/
                            (overflow) ? `Ov :
                            5'd0;
endmodule
