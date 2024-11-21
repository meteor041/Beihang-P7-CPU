`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:58:42 11/05/2024 
// Design Name: 
// Module Name:    IF_ID 
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
module IF_ID(
    input wire clk,
    input wire reset,
    input wire enable, // 使能信号
    input wire req, // 中断请求信号
    input wire flush, // 冲洗信号
    input wire [31:0] IF_PC, // IF传入PC地址
    input wire [31:0] IF_instr, // IF传入指令
    input wire [4:0] IF_ExcCode, // IF区异常码
    input wire IF_BD, // IF区延迟槽指令信号
    output reg [31:0] ID_PC, // ID接收PC地址
    output reg [31:0] ID_instr, // ID接收指令
    output reg [4:0] ID_ExcCode, // ID接收异常码
    output reg ID_BD // ID接收延迟槽指令信号
    );
    initial begin
        ID_PC = 32'h3000;
        ID_instr = 32'b0;
        ID_ExcCode = 5'b0;
        ID_BD = 1'b0;
    end
    always @(posedge clk)begin
        if (reset)begin
            ID_PC <= 32'h3000;
            ID_instr <= 32'h0;
            ID_ExcCode = 5'b0;
            ID_BD = 1'b0;
        end
        else if (req)begin
            ID_PC <= 32'h4180; // 异常处理程序入口地址
            ID_instr <= 32'b0; // nop
            ID_ExcCode <= 5'b0;
            ID_BD <= 1'b0;
        end
        else if (enable)begin
            if (flush)begin
                ID_PC <= 32'h3000;
                ID_instr <= 32'h0;
                ID_ExcCode <= 5'b0;
                ID_BD <= 1'b0;
            end
            else begin
                ID_PC <= IF_PC;
                ID_instr <= IF_instr;
                ID_ExcCode <= IF_ExcCode;
                ID_BD <= IF_BD;
            end
        end
    end
endmodule
