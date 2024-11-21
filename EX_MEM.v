`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:50:23 11/06/2024 
// Design Name: 
// Module Name:    EX_MEM 
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
module EX_MEM(
    input wire clk,
    input wire reset,
    input wire flush,
    input wire req,
    input wire [31:0] EX_PC,
    input wire [31:0] EX_instr,
    input wire [4:0] EX_A3,
    input wire [31:0] EX_WD,
    input wire [31:0] EX_RES,
    input wire [31:0] EX_RD2,
    input wire EX_BD,
    input wire [4:0] EX_MEM_ExcCode,
    // out
    output reg [31:0] MEM_PC,
    output reg [31:0] MEM_instr,
    output reg [4:0] MEM_A3,
    output reg [31:0] MEM_WD,
    output reg [31:0] MEM_RES,
    output reg [31:0] MEM_RD2,
    output reg MEM_BD,
    output reg [4:0] MEM_ExcCode
    );

    initial begin
        MEM_PC = 32'h3000;
        MEM_instr= 32'b0;
        MEM_A3 = 5'b0;
        MEM_WD = 32'b0;
        MEM_RES= 32'b0;
        MEM_RD2= 32'b0;
        MEM_BD = 1'b0;
        MEM_ExcCode = 5'b0;
    end
    always @(posedge clk)begin
        if (reset || flush || req)begin
            MEM_PC = (req == 1'b1) ? 32'h0000_4180 : 32'h3000;
            MEM_instr= 32'b0;
            MEM_A3 = 5'b0;
            MEM_WD = 32'b0;
            MEM_RES= 32'b0;
            MEM_RD2= 32'b0;
            MEM_BD = 1'b0;
            MEM_ExcCode = 5'b0;
        end
        else begin
            MEM_PC = EX_PC;
            MEM_instr = EX_instr;
            MEM_A3 = EX_A3;
            MEM_WD = EX_WD;
            MEM_RES = EX_RES;
            MEM_RD2 = EX_RD2;
            MEM_BD = EX_BD;
            MEM_ExcCode = EX_MEM_ExcCode;
        end
    end
endmodule
