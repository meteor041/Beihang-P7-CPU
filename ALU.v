`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:13:28 11/06/2024 
// Design Name: 
// Module Name:    ALU 
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
`include "constants.v"
module ALU(
    input wire [31:0] SrcA,
    input wire [31:0] SrcB,
    input wire [3:0] ALUOp,
    output reg [31:0] ALURes,
    output reg overflow
    );
    integer i;
    reg [32:0] temp;
    initial begin
      overflow = 1'b0;
    end
    always @(*)begin
      overflow = 1'b0;
        case (ALUOp)
            `aluAdd:begin
                temp = {SrcA[31],SrcA} + {SrcB[31], SrcB};
                if (temp[32] != temp[31])begin // addi, add->`Ov,load->`AdEL,store->`AdES
                  overflow = 1'b1;
                  ALURes = 32'bz;
                end
                else begin
                  overflow = 1'b0;
                  ALURes = SrcA+SrcB;
                end
            end
            `aluSub:begin
                temp = {SrcA[31], SrcA} - {SrcB[31], SrcB};
                if (temp[32] != temp[31])begin // sub->`Ov
                  overflow = 1'b1;
                  ALURes = 32'bz;
                end
                else begin
                  overflow = 1'b0;
                  ALURes = SrcA-SrcB;
                end
            end
            `aluOr:ALURes = SrcA | SrcB;
            `aluAnd:ALURes = SrcA & SrcB;
            `aluLui:ALURes = SrcB << 16; // 高位覆盖
            `aluSlt:ALURes = ($signed(SrcA) < $signed(SrcB)) ? $signed(32'b1) : $signed(32'b0);
            `aluSltu:ALURes = ($unsigned(SrcA) < $unsigned(SrcB)) ? $unsigned(32'b1) : $unsigned(32'b0);
            default:ALURes = 32'bz;
        endcase
    end
endmodule
