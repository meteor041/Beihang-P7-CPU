`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:23:35 11/06/2024 
// Design Name: 
// Module Name:    HAZARD_CTRL 
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
module HAZARD_CTRL(
    // ID
    input wire [4:0] ID_A1,
    input wire [4:0] ID_A2,
    input wire [31:0] ID_RD1,
    input wire [31:0] ID_RD2,
    input wire [1:0] ID_A1_USE,
    input wire [1:0] ID_A2_USE,
    input wire ID_MD,
    input wire ID_Eret, // EX阶段正在执行Eret指令
    // EX
    input wire [4:0] EX_A1,
    input wire [4:0] EX_A2,
    input wire [31:0] EX_RD1,
    input wire [31:0] EX_RD2,
    input wire [1:0] EX_NEW,
    input wire [4:0] EX_A3,
    input wire [31:0] EX_WD,
    input wire MULT_DIV_BUSY,
    input wire MULT_DIV_START,
    input wire EX_MTC0, // EX阶段正在传递mtc0指令
    // MEM
    input wire [4:0] MEM_A2,
    input wire [31:0] MEM_RD2,
    input wire [1:0] MEM_A2_NEW,
    input wire [4:0] MEM_A3,
    input wire [31:0] MEM_WD,
    input wire MEM_MTC0, // MEM阶段正在传递mtc0指令
    // WB
    input wire [4:0] WB_A3,
    input wire [31:0] WB_WD,
    // 转发
    output wire [31:0] ID_RD1_forward,
    output wire [31:0] ID_RD2_forward,
    output wire [31:0] EX_RD1_forward,
    output wire [31:0] EX_RD2_forward,
    output wire [31:0] MEM_RD2_forward,
    // Signals
    output wire Enable_PC,
    output wire Enable_IF_ID,
    output wire Enable_ID_EX,
    output wire Flush_ID_EX,
    output wire Flush_EX_MEM
    );

/*-------------------------------暂停-----------------------------------*/
    wire STALL;
    assign STALL =  (ID_A1 == EX_A3 && ID_A1_USE < EX_NEW && EX_A3 != 0)  
                 || (ID_A2 == EX_A3 && ID_A2_USE < EX_NEW && EX_A3 != 0)
                 || (ID_A1 == MEM_A3 && ID_A1_USE < MEM_A2_NEW && MEM_A3 != 0)
                 || (ID_A2 == MEM_A3 && ID_A2_USE < MEM_A2_NEW && MEM_A3 != 0)
                 || (ID_MD && (MULT_DIV_BUSY || MULT_DIV_START))
                 /*ID区eret使用CP0中的EPC,与EX/MEM区mtc0指令对EPC写入值冲突*/
                 || (ID_Eret && ((EX_MTC0 && EX_A3 == 5'D14) || (MEM_MTC0 && MEM_A3 == 5'd14))); 
    assign Enable_PC = !STALL;
    assign Enable_IF_ID = !STALL;
    assign Flush_ID_EX = STALL;



    assign Flush_EX_MEM = 1'b0;
    assign Enable_ID_EX = 1'b1;

/*-------------------------------转发-----------------------------------*/
    reg [31:0] REG_A3;
    reg [31:0] REG_WD;

    assign ID_RD1_forward = (ID_A1 == 5'b0) ? 0 :
                            (ID_A1 == MEM_A3) ? MEM_WD :
                            (ID_A1 == WB_A3) ? WB_WD :
                            ID_RD1;

    assign ID_RD2_forward = (ID_A2 == 5'b0) ? 0:
                            (ID_A2 == MEM_A3) ? MEM_WD :
                            (ID_A2 == WB_A3) ? WB_WD :
                            ID_RD2;

    assign EX_RD1_forward = (EX_A1 == 5'b0) ? 0:
                            (EX_A1 == MEM_A3) ? MEM_WD :
                            (EX_A1 == WB_A3) ? WB_WD :
                            EX_RD1;

    assign EX_RD2_forward = (EX_A2 == 5'b0 ) ? 0:
                            (EX_A2 == MEM_A3) ? MEM_WD :
                            (EX_A2 == WB_A3) ? WB_WD : 
                            EX_RD2;

    assign MEM_RD2_forward = (MEM_A2 == 5'b0 ) ? 0 :
                            (MEM_A2 == WB_A3) ? WB_WD :
                            MEM_RD2;

endmodule
