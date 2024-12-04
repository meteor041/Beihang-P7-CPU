`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:41:22 11/05/2024 
// Design Name: 
// Module Name:    IF 
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
module IF(
    input wire clk, // 时钟信号
    input wire reset,   // 重置信号
    input wire req, // 中断请求信号
    input wire enablePC, // PC 使能信号
    input wire [31:0] NPC, // PC地址输入
    input wire [3:0] ID_OP, // ID区处理指令分支类型
    output wire [31:0] IF_PC, // 输出PC地址
    output wire IF_BD, // IF区当前指令是否为延迟槽指令
    output wire [4:0] IF_ExcCode // IF区的异常码
    );

    // 程序计数器
    PC pc(
        .clk(clk),
        .reset(reset),
        .req(req),
        .enable(enablePC),
        .NPC(NPC), // PC地址输入
        .PC(IF_PC) // 输出PC地址
    );
    assign IF_BD = (ID_OP != `ID_NOJUMP) ? 1 : 0;
    // PC 地址未字对齐。
    // PC 地址超过 0x3000 ~ 0x6ffc。
    assign IF_ExcCode = (IF_PC[1:0] != 2'b00 || (IF_PC > 32'h6ffc || IF_PC < 32'h3000)) ? `AdEL : 5'd0;
endmodule
