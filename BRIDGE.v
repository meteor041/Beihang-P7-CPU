`timescale 1ns / 1ps

module BRIDGE(
    input wire [31:0] PR_addr,
    input wire [31:0] PR_WD,
    input wire [3:0] PR_byteen,
    /*load相关,将写入寄存器的值传回CPU*/
    output wire [31:0] PR_RD,
    /*根据DEV_addr从各部件获取数据*/
    output wire [31:0] DEV_addr,
    input wire [31:0] DM_RD,
    input wire [31:0] TC0_RD,
    input wire [31:0] TC1_RD,
    /*对DEV_addr写入(字节)数据使能信号*/
    output wire [3:0] DM_byteen,
    output wire TC0_enable,
    output wire TC1_enable,
    output wire [3:0] INT_byteen
    
);

/*输出地址,传递给TC0,TC1,*/
    assign DEV_addr = PR_addr;
/*使能信号*/
    assign DM_byteen = (PR_addr >= 32'h0000_0000 && PR_addr <= 32'h0000_2FFF) ? PR_byteen : 4'b0;
    assign TC0_enable = (PR_addr >= 32'h0000_7F00 && PR_addr <= 32'h0000_7f0B) ?  (|PR_byteen) : 1'b0;
    assign TC1_enable = (PR_addr >= 32'h0000_7F10 && PR_addr <= 32'h0000_7f1B) ?  (|PR_byteen) : 1'b0;
    assign INT_byteen = (PR_addr >= 32'h0000_7F20 && PR_addr <= 32'h0000_7f23) ? PR_byteen : 4'b0;

    assign PR_RD = (PR_addr >= 32'h0000_0000 && PR_addr <= 32'h0000_2FFF) ? DM_RD :
                   (PR_addr >= 32'h0000_7F00 && PR_addr <= 32'h0000_7f0B) ? TC0_RD :
                   (PR_addr >= 32'h0000_7F10 && PR_addr <= 32'h0000_7f1B) ? TC1_RD :
                    32'bz;
endmodule