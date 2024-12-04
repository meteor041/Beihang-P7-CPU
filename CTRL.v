`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:50:19 11/05/2024 
// Design Name: 
// Module Name:    CTRL 
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
module CTRL(
    input wire [31:0] instr,

    // ID(解码)阶段
    input wire zero,
    output wire Branch,
    output wire Jal,
    output Jr,
    output Eret,
    output ExtControl,
    output Sel_ID_WD,
    output [4:0] ID_A3,
    output [1:0] ID_A1_USE,
    output [1:0] ID_A2_USE,
    output [3:0] CMPControl,
    output ID_MD,
    output [3:0] ID_OP,
    output ri,
    output SYSCALL,
    // EX(执行)阶段
    output [3:0] ALUOp,
    output ALU_A_Sel,
    output ALU_B_Sel,
    output WD_Sel,
    output [1:0] EX_NEW,
    output [2:0] MULT_DIV_OP,
    output MULT_DIV_START,
    output MFLO,
    output MFHI,
    output MTHI,
    output MTLO,
    output MTC0,
    output wire LOAD,
    output wire STORE,
    // MEM(存储)阶段
    output MEM_WE, // 选择是否写入Memory
    output MEM_Sel, // 选择是否将Memory读出值向后传递
    output CP0_Sel, // 选择是否将CP0读出值向后传递
    output [1:0] MEM_A2_NEW,
    output [1:0] MEM_PART,
    output [2:0] MEM_EXT_Control,
    output [4:0] mfc0_rd,
    output CP0_enable,
    output EXL_clr
    );

/*---------------------------------输入指令分析------------------------------------------------*/
    wire [5:0] op;
    wire [5:0] funct;
    wire [4:0] rs;
    wire [4:0] rt;
    wire [4:0] rd;

    assign op = instr[31:26];
    assign funct = instr[5:0];
    assign rs = instr[25:21];
    assign rt = instr[20:16];
    assign rd = instr[15:11];

/*-----------------------------------------指令类型----------------------------------*/
    // R类指令信号
    wire R;
    // COPO类指令
    wire COPO;
    // cal_r
    wire add, sub, and_, or_, slt, sltu, nop;
    // cal_i
    wire ori, lui, addi, andi;
    // branch
    wire beq, bgez, bgtz, blez, bltz, bne, bnumeq;
    // load/store
    wire lw, sw, lh, sh, lb, sb;
    // jal
    wire jal;
    // jr
    wire jr;
    // 乘除相关指令
    wire mult, multu, div, divu, mfhi, mflo, mthi, mtlo;
    // 异常相关指令
    wire mfc0, mtc0, eret, syscall; 

    // R类指令
    assign R =   (op == 6'b0) ? 1 : 0;
    assign add = (R && funct == 6'b100000) ? 1 : 0;
    assign sub = (R && funct == 6'b100010) ? 1 : 0;
    assign jr =  (R && funct == 6'b001000) ? 1 : 0;
    assign nop = (R && funct == 6'b000000) ? 1 : 0;
    assign and_ = (R && funct == 6'b100100) ? 1 : 0;
    assign or_ = (R && funct == 6'b100101) ? 1 : 0;
    assign slt = (R && funct == 6'b101010) ? 1 : 0;
    assign sltu = (R && funct == 6'b101011) ? 1 : 0;
    // I型指令
    assign ori = (op == 6'b001101) ? 1 : 0;
    assign lui = (op == 6'b001111) ? 1 : 0;
    assign addi = (op == 6'b001000) ? 1 : 0;
    assign andi = (op == 6'b001100) ? 1 : 0;
    // 乘除类指令
    assign mult = (R && funct == 6'b011000) ? 1 : 0;
    assign multu = (R && funct == 6'b011001) ? 1 : 0;
    assign div = (R && funct == 6'b011010) ? 1 : 0;
    assign divu = (R && funct == 6'b011011) ? 1 : 0;
    assign mfhi = (R && funct == 6'b010000) ? 1 : 0;
    assign mflo = (R && funct == 6'b010010) ? 1 : 0;
    assign mthi = (R && funct == 6'b010001) ? 1 : 0;
    assign mtlo = (R && funct == 6'b010011) ? 1 : 0;
    // 跳转类指令
    assign beq = (op == 6'b000100) ? 1 : 0;
    assign bgez = (op == 6'b000001 && rt == 5'b00001) ? 1 : 0;
    assign bgtz = (op == 6'b000111) ? 1 : 0;
    assign blez = (op == 6'b000110) ? 1 : 0;
    assign bltz = (op == 6'b000001 && rt == 5'b00000) ? 1 : 0;
    assign bne  = (op == 6'b000101) ? 1 : 0;
    assign bnumeq = (op == 6'b110110) ? 1 : 0;
    assign jal = (op == 6'b000011) ? 1 : 0;
    // load/store类指令
    assign lw =  (op == 6'b100011) ? 1 : 0;
    assign sw =  (op == 6'b101011) ? 1 : 0;
    assign lh = (op == 6'b100001) ? 1 : 0;
    assign sh = (op == 6'b101001) ? 1 : 0;
    assign lb = (op == 6'b100000) ? 1 : 0;
    assign sb = (op == 6'b101000) ? 1 : 0;

    assign COPO = (op == 6'b010000) ? 1 : 0;
    assign eret = (COPO && funct == 6'b011000) ? 1 : 0;
    assign mfc0 = (COPO && rs == 5'b00000) ? 1 : 0;
    assign mtc0 = (COPO && rs == 5'b00100) ? 1 : 0;
    assign syscall = (R && funct == 6'b001100) ? 1 : 0;

    // $T_{USE},T_{NEW}$的分组(10类)
    wire cal_r, cal_i, branch, cal_jal, cal_jr, load, store, cal_md, load_md, store_md;
    assign cal_r    = (add | sub | and_ | or_ | slt | sltu);
    assign cal_i    = (ori | lui | addi | andi);
    assign branch   = (beq | bne | bgez | bgtz | blez | bltz | bnumeq);
    assign cal_jal  = jal;
    assign cal_jr   = jr;
    assign load     = (lw | lh | lb);
    assign store    = (sw | sh | sb);
    assign cal_md   = (mult | multu | div | divu);
    assign load_md  = (mfhi | mflo);
    assign store_md = (mthi | mtlo);
/*--------------------------------------ID(解码)阶段-------------------------------------*/
    // 分支类跳转信号(1:跳转至PC+sign_extended(Offset)<<2;    0:不跳转)
    assign Branch = ((beq || bgez || bgtz || blez ||  bltz || bne || bnumeq) & zero)  ? 1 : 0;
    // 与jal相关,若执行jal指令则为1,该信号为1时将Write Data(写入寄存器的数据)指定为ID_PC+8
    assign Sel_ID_WD = (jal) ? 1'b1 : 1'b0;
    // Jal信号(1:跳转至PC+PC31...28||instr_index||00;        0:不跳转)
    assign Jal = jal ? 1 : 0;
    // Jr信号(1:跳转至GPR[rs];                                0:不跳转)
    assign Jr = jr ? 1 : 0;
    // Eret信号(eret)
    assign Eret = eret ? 1 : 0;
    // EXT模块控制信号(1:立即数零扩展;                    0:立即数符号扩展)
    assign ExtControl = (lw || sw || beq || bnumeq || lui || bgez || bgtz || blez ||  
                        bltz || bne || lb || sb || lh || sh || addi) ? 1'b0 :
                        (ori || andi) ? 1'b1 :
                        1'bz;
    // 解码阶段输出的写入寄存器地址(向后传递直至WB阶段)
    assign ID_A3 = (jal) ? 31 : 
                   (add || sub || and_ || or_ || slt || sltu || mflo || mfhi) ? rd : 
                   (lui || ori || lw || lb || lh || addi || andi || mfc0)? rt :
                   0; // 这里$0可以代表不写入(EnWrite=0)
    // rs的$T_{USE}$
    assign ID_A1_USE = (branch || cal_jr) ? 2'd0 : // ID阶段立即使用(跳转指令)
                       (cal_r || cal_i || cal_md || store_md || load || store) ? 2'd1 : // EX阶段再使用(涉及ALU/MULT_DIV的指令)
                       (load_md || cal_jal || eret || mfc0 || mtc0 || syscall) ? 2'd3 :  // 3表示该指令在后面的流水线中不会用到该指令
                       2'd3; 
    // rt的$T_{USE}$
    assign ID_A2_USE = (branch) ? 2'd0 : // ID阶段立即使用(跳转指令)
                       (cal_r || cal_md) ? 2'd1 : // EX阶段再使用(涉及ALU的指令)
                       (store || mtc0) ? 2'd2 : // MEM阶段再使用rt寄存器(涉及store的指令)
                       (cal_jal || cal_i || cal_jr || load_md || load || store_md || eret || mfc0 || syscall) ? 2'd3 : // 3表示该指令在后面的流水线中不会用到该指令
                       2'd3;
    // CMP部件控制信号(选择CMP比较方式)
    assign CMPControl = (beq) ? `cmpBeq :
                        (bgez) ? `cmpBgez :
                        (bgtz) ? `cmpBgtz :
                        (blez) ? `cmpBlez :
                        (bltz) ? `cmpBltz :
                        (bne) ? `cmpBne : 
                        (bnumeq) ? `bnumeq:
                        4'bz;
    // ID区当前是否在处理乘除相关指令
    assign ID_MD = (mult || multu || div || divu || mfhi || mflo || mthi || mtlo) ? 1 : 0;
    // ID_OP
    assign ID_OP = (branch) ? `ID_BRANCH :
                   (jal) ? `ID_JAL :
                   (jr) ? `ID_JR :
                   `ID_NOJUMP;
    // ri
    assign ri = ~(cal_r | cal_i | branch | cal_jal | cal_jr | load | store | cal_md | load_md | store_md | nop | COPO | syscall);
    // SYSCALL
    assign SYSCALL = (syscall) ? 1 : 0;
/*-------------------------------------------------EX(执行)阶段------------------------------------------*/
    // ALU控制信号(选择计算方式)
    assign ALUOp = (add || lw || sw || lb || sb || lh || sh || addi) ? `aluAdd : // +加
                    (ori || or_) ? `aluOr : // |或
                    (sub) ? `aluSub : // -减
                    (lui) ? `aluLui : // 高位覆盖
                    (and_ || andi) ? `aluAnd : // 与
                    (slt) ? `aluSlt : // signed数比较,小于置1
                    (sltu) ? `aluSltu : // unsigned数比较,小于置1
                    4'bz;
    // 选择寄存器rs的值还是寄存器rt的值(为sll提前准备)
    assign ALU_A_Sel = 0;
    // 选择32位立即数或者寄存器rt的值(1:选择32位立即数;      0:选择寄存器rt的值)
    assign ALU_B_Sel = (ori || lw || sw || lui || lb || sb || lh || sh || addi || andi) ? 1'b1 :
                       (add || sub || and_ || or_ || slt || sltu || mtc0) ?  1'b0 :
                        1'bz;
    // 选择WriteData来源(1:ID阶段的PC+8;                    0:ALURes)
    assign WD_Sel = (jal) ? 1 : 0;
    // 当前EX阶段$T_{NEW}$
    assign EX_NEW = (cal_r || cal_i || load_md) ? 2'd1:// 再过1个时钟周期该寄存器的写入数据就会从EX_MEM间流水寄存器流出
                    (load || mfc0) ? 2'd2 : // 再过2个时钟周期该寄存器的写入数据就会从MEM_WB间流水寄存器流出
                    (store || cal_jal || cal_jr || cal_md || store_md || branch || syscall || mtc0 || eret) ? 2'd0 : // 已经流出或者没有对寄存器写入数值的操作
                    2'd0;
    // 乘除模块计算方式
    assign MULT_DIV_OP = (mult) ? `mult : // signed数相乘
                         (div) ? `div : // signed数相除
                         (multu) ? `multu : // unsigned数相乘
                         (divu) ? `divu : // unsigned数相除
                         3'bz;
    // 乘除模块开始信号
    assign MULT_DIV_START = (mult || div || multu || divu) ? 1 : 0;
    // mthi信号,下同理
    assign MTHI = (mthi == 1) ? 1 : 0;
    assign MTLO = (mtlo == 1) ? 1 : 0;
    assign MFHI = (mfhi == 1) ? 1 : 0;
    assign MFLO = (mflo == 1) ? 1 : 0;
    assign MTC0 = (mtc0 == 1) ? 1 : 0;
    assign LOAD = (load == 1) ? 1 : 0;
    assign STORE = (store == 1) ? 1 : 0;
/*------------------------------------------------- MEM(存储)阶段------------------------------------*/
    // MEM Write Enable信号(1:对Memory写入数据;               0:不写入)
    assign MEM_WE = (sw || sh || sb) ? 1 : 0;
    // 选择是否将Memory读出值向后传递(1:yes(load类指令);                   0:no) 
    assign MEM_Sel = (lw || lh || lb) ? 1 : 0;
    // MEM$T_{NEW}$
    assign MEM_A2_NEW = (load || mfc0) ? 2'd1 :  // 再过1个时钟周期该寄存器的写入数据就会从MEM_WB间流水寄存器流出
                        (store || cal_r || cal_i || cal_jal || cal_jr || cal_md || load_md || store_md || branch || syscall || mtc0) ? 2'd0 :
                        2'd0;
    // 选择存入/读取Word,Half或者Byte
    assign MEM_PART = (sw || lw) ? `memWord :
                      (sh || lh) ? `memHalf :
                      (sb || lb) ? `memByte : 
                      `none;
    // MEM的扩展位控制信号
    assign MEM_EXT_Control = (lw) ? `nonExt :
                             (lh) ? `signedHalfExt :
                             (lb) ? `signedByteExt :
                             3'bz;
    assign CP0_Sel = (mfc0) ? 1 : 0;
    assign mfc0_rd = (mfc0 || mtc0) ? rd : 5'bz;
    assign CP0_enable = (mtc0) ? 1 : 0;
    assign EXL_clr = (eret) ? 1 : 0;
endmodule

