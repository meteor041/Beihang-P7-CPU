`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:37:02 11/05/2024 
// Design Name: 
// Module Name:    mips 
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
//encoding=utf-8
`default_nettype none
module mips(
    input wire clk, // 时钟信号
    input wire reset, // 同步复位信号
    input wire interrupt, // 外部中断信号(new)
    output wire [31:0] macroscopic_pc, // 宏观PC(new)

    output wire [31:0] i_inst_addr, // 需要进行取指操作的流水级 PC（一般为 F 级）
    input wire [31:0] i_inst_rdata, // i_inst_addr 对应的 32 位指令

    output wire [31:0] m_data_addr, // 数据存储器待写入地址
    input wire [31:0] m_data_rdata, // m_data_addr 对应的 32 位数据
    output wire [31:0] m_data_wdata, // 数据存储器待(DM)写入数据
    output wire [3 :0] m_data_byteen, // DM字节使能信号

    output wire [31:0] m_int_addr, // 中断发生器待写入地址(new)
    output wire [3:0] m_int_byteen, // 中断发生器字节使能信号(new)

    output wire [31:0] m_inst_addr, // M 级 PC

    output wire w_grf_we, // GRF 写使能信号
    output wire [4:0] w_grf_addr, // GRF 中待写入寄存器编号
    output wire [31:0] w_grf_wdata, // GRF 中待写入数据

    output wire [31:0] w_inst_addr // W 级 PC
    );

/*--------------------------CPU-------------------------------------*/
    wire [5:0] HW_Int;
    wire IRQ0;
    wire IRQ1;
    /*Timer0 输出的中断信号接入 HWInt[0] (最低中断位)，
    Timer1 输出的中断信号接入 HWInt[1]，
    来自中断发生器的中断信号接入 HWInt[2]。*/
    assign HW_Int = {3'b0, interrupt, IRQ1, IRQ0}; 
    wire [3:0] tmp_m_data_byteen;
    wire [31:0] PR_RD;
    CPU cpu(
        .clk(clk),
        .reset(reset),
        .HW_Int(HW_Int),
        // F区
        .i_inst_addr(i_inst_addr),
        .i_inst_rdata(i_inst_rdata),
        // BRIDGE
        .m_data_addr(m_data_addr),
        .m_data_rdata(PR_RD),
        .m_data_wdata(m_data_wdata),
        .m_data_byteen(tmp_m_data_byteen),
        // MEM区
        .m_inst_addr(m_inst_addr),
        // WB区
        .w_grf_we(w_grf_we),
        .w_grf_addr(w_grf_addr),
        .w_grf_wdata(w_grf_wdata),
        .w_inst_addr(w_inst_addr),
        .macroscopic_pc(macroscopic_pc)
    );

/*--------------------------BRIDGE-------------------------------------*/
    wire [31:0] DEV_addr;
    wire TC0_enable;
    wire TC1_enable;
    wire [31:0] TC0_RD;
    wire [31:0] TC1_RD;
    BRIDGE bridge(
        .PR_addr(m_data_addr),
        .PR_WD(m_data_wdata),
        .PR_byteen(tmp_m_data_byteen),
        /*根据DEV_addr从各部件获取数据*/
        .DEV_addr(DEV_addr),
        .DM_RD(m_data_rdata),
        .TC0_RD(TC0_RD),
        .TC1_RD(TC1_RD),
        /*对DEV_addr写入(字节)数据使能信号*/
        .DM_byteen(m_data_byteen),
        .TC0_enable(TC0_enable),
        .TC1_enable(TC1_enable),
        .INT_byteen(m_int_byteen),
        /*load相关,将写入寄存器的值写入CPU/TC0/TC1*/
        .PR_RD(PR_RD)
    );

/*--------------------------tc0-------------------------------------*/
    TC tc0(
        .clk(clk),
        .reset(reset),
        .Addr(DEV_addr[31:2]),
        .WE(TC0_enable),
        .Din(m_data_wdata),
        .Dout(TC0_RD),
        .IRQ(IRQ0)
    );
/*--------------------------tc1-------------------------------------*/
    TC tc1(
        .clk(clk),
        .reset(reset),
        .Addr(DEV_addr[31:2]),
        .WE(TC1_enable),
        .Din(m_data_wdata),
        .Dout(TC1_RD),
        .IRQ(IRQ1)
    );
/*--------------------------interrupt-------------------------------------*/
    assign m_int_addr = DEV_addr;
endmodule
