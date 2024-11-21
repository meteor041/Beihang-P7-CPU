`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:01:46 11/05/2024 
// Design Name: 
// Module Name:    ID 
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
module ID(
    input wire clk,
    input wire reset,
    /*IF/ID输入*/
    input wire [31:0] IF_PC, // IF区的PC,用于正常的地址+4操作
    input wire [31:0] ID_PC, // ID区的PC
    input wire [31:0] ID_instr, // ID区的指令
    input wire [31:0] ID_RD1_forward, // 转发的Data1,其输入来源于HAZARD_CONTROL
    input wire [31:0] ID_RD2_forward, // 转发的Data2,其输入来源于HAZARD_CONTROL
    input wire [4:0] ID_ExcCode, // ID区的异常码
    /*WB输入*/
    input wire [31:0] WB_WD, // 写入数据,来自于WB阶段
    input wire [4:0] WB_A3, // 写入寄存器地址,来自于WB阶段
    input wire [31:0] WB_PC, // 写入数据对应PC地址,传递给$display语句,作为显示,来自于WB阶段
    input wire [31:0] EPC_out, // eret指定跳转地址
    /*ID输出*/
    output wire [31:0] ID_RD1, // ID输出rs寄存器读出值
    output wire [31:0] ID_RD2, // ID输出rt寄存器读出值
    output wire [31:0] ID_IMM32,  // ID输出经过位扩展的立即数
    output wire [4:0] ID_A3, // ID阶段的A3,向后传递用
    output wire [31:0] ID_WD, // ID阶段的写入数据,向后传递
    output wire [31:0] ID_NPC, // ID阶段计算的下一个地址
    output wire [1:0] ID_A1_USE, // ID阶段需要使用A1寄存器的信号
    output wire [1:0] ID_A2_USE, // ID阶段需要使用A2寄存器的信号
    output wire ID_MD, // ID区当前是否在处理乘除相关指令
    output wire [4:0] ID_EX_ExcCode, // branch delay
    output wire [3:0] ID_OP,
    output wire IF_ID_FLUSH,
    output wire ID_Eret // ID阶段正在执行Eret指令
    );


/*----------------------------EXT,立即数扩展器----------------------------------*/
    wire [15:0] imm16;
    wire ExtControl;
    wire [31:0] imm32;
    assign imm16 = ID_instr[15:0];
    EXT ext(
        .imm16(imm16),
        .ExtControl(ExtControl),
        .imm32(imm32)
    );

/*--------------------------CMP,比较器-------------------------------------------*/
    wire [31:0] A;
    wire [31:0] B;
    assign A = ID_RD1_forward;
    assign B = ID_RD2_forward;
    wire zero;
    wire [3:0] CMPControl;
    CMP cmp(
        .A(A),
        .B(B),
        .CMPControl(CMPControl),
        .zero(zero)
    );

/*--------------------------NPC,计算下一个指令地址-------------------------------------------*/
    wire [25:0]ID_imm26;
    wire Branch;
    wire Jal;
    wire Jr;
    wire Eret;
    assign ID_Eret = Eret;
    assign ID_imm26 = ID_instr[25:0];
    NPC npc(
        .IF_PC(IF_PC),
        .ID_PC(ID_PC),
        .ID_imm26(ID_imm26),
        .imm32(imm32),
        .Jr_Reg_Data(ID_RD1_forward), // 来自于转发
        .EPC_out(EPC_out),
        .Branch(Branch), // Branch信号
        .Jal(Jal),
        .Jr(Jr),
        .Eret(Eret),
        .NPC(ID_NPC) // 输出
    );

/*--------------------------ID_CTRL,ID区控制器-------------------------------------------*/
    wire Sel_ID_WD;
    wire SYSCALL;
    CTRL ID_CTRL(
        .instr(ID_instr),
        .Branch(Branch),
        .zero(zero),
        .Jal(Jal),
        .Jr(Jr),
        .Eret(Eret),
        .ExtControl(ExtControl),
        .Sel_ID_WD(Sel_ID_WD),
        .ID_A3(ID_A3),
        .ID_A1_USE(ID_A1_USE),
        .ID_A2_USE(ID_A2_USE),
        .CMPControl(CMPControl),
        .ID_MD(ID_MD),
        .ID_OP(ID_OP),
        .ri(ri),
        .SYSCALL(SYSCALL)
    );
    
/*--------------------------GRF,寄存器堆-------------------------------------------*/
    wire [4:0] A1;
    wire [4:0] A2;
    wire [4:0] A3;
    wire [31:0] WD;
    wire [31:0] PC;
    wire [31:0] RD1;
    wire [31:0] RD2;
    assign A1 = ID_instr[25:21];
    assign A2 = ID_instr[20:16];
    assign A3 = WB_A3;
    assign WD = WB_WD;
    assign PC = WB_PC;
    GRF grf(
        .clk(clk),
        .reset(reset),
        .A1(A1),
        .A2(A2),
        .A3(A3),
        .WD(WD),
        .PC(PC),
        .RD1(RD1),
        .RD2(RD2)
    );
    
/*--------------------------输出------------------------------------------*/
    wire[31:0] PC_PLUS_EIGHT;
    assign PC_PLUS_EIGHT = ID_PC + 32'd8;
    assign ID_RD1 = RD1;
    assign ID_RD2 = RD2;
    assign ID_IMM32 = imm32;
    assign ID_WD = Sel_ID_WD ? PC_PLUS_EIGHT : 32'bz; // EX阶段只可能传递jal指定的PC+8,否则为无效的高阻值数据
    assign ID_EX_ExcCode =  (ID_ExcCode != 5'd0) ? ID_ExcCode : 
                            /*未知的指令码。*/
                            (ri) ? `RI :
                            /*系统调用。*/
                            (SYSCALL) ? `Syscall :
                            5'd0; 
    assign IF_ID_FLUSH = (Eret) ? 1 : 0;
endmodule
