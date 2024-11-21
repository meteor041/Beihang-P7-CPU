module CPU(
    input wire clk,
    input wire reset,
    input wire [5:0] HW_Int,
    // F区
    output wire [31:0] i_inst_addr,
    input wire [31:0] i_inst_rdata,
    // BRIDGE
    output wire [31:0] m_data_addr,
    input wire [31:0] m_data_rdata,
    output wire [31:0] m_data_wdata,
    output wire [3:0] m_data_byteen,
    // MEM
    output wire [31:0] m_inst_addr,
    // WB
    output wire w_grf_we,
    output wire [4:0] w_grf_addr,
    output wire [31:0] w_grf_wdata,
    output wire [31:0] w_inst_addr, // W 级 PC
    output wire [31:0] macroscopic_pc
);
    /*Instruction Fetch区域,取指令*/
    wire Enable_PC;
    wire [31:0] IF_instr;
    wire [31:0] IF_PC;
    wire [31:0] ID_NPC; // ID阶段计算的下一个地址
    assign i_inst_addr = IF_PC; // 需要进行取指操作的流水级 PC（一般为 F 级）
    assign IF_instr = i_inst_rdata; // m_data_addr 对应的 32 位数据
    wire IF_BD;
    wire [4:0] IF_ExcCode;
    wire [3:0] ID_OP;
    wire req;
    IF uvv1(
        .clk(clk), // 时钟信号
        .reset(reset), // 重置信号
        .req(req),
        .enablePC(Enable_PC), // 使能信号
        .NPC(ID_NPC), // PC地址输入
        // .IF_instr(IF_instr), // 输出指令
        .ID_OP(ID_OP),
        .IF_PC(IF_PC), // 输出PC地址
        .IF_BD(IF_BD),
        .IF_ExcCode(IF_ExcCode)
    );

    /*IF,ID间流水寄存器*/
    wire [31:0] ID_PC;
    wire [31:0] ID_instr;
    wire Enable_IF_ID;
    wire ID_BD;
    wire [4:0] ID_ExcCode;
    wire IF_ID_FLUSH;
    IF_ID uvv2(
        .clk(clk), // 时钟信号
        .reset(reset), // 重置信号
        .req(req), //冲洗信号
        .flush(IF_ID_FLUSH),
        .enable(Enable_IF_ID), // 使能信号
        .IF_PC(IF_PC),  // IF传入PC地址
        .IF_instr(IF_instr), // IF传入指令
        .IF_BD(IF_BD),
        .IF_ExcCode(IF_ExcCode),
        .ID_PC(ID_PC), // ID接收PC地址
        .ID_instr(ID_instr), // IF接收指令
        .ID_BD(ID_BD),
        .ID_ExcCode(ID_ExcCode)
    );

    /*Instruction Fetch,
    模块:GRF,NPC,CMP,EXT,ID_CTRL
    */
    wire [31:0] ID_RD1_forward;
    wire [31:0] ID_RD2_forward;
    wire [31:0] WB_WD;
    wire [4:0] WB_A3;
    wire [31:0] WB_PC;

    wire [31:0] ID_RD1;
    wire [31:0] ID_RD2;
    wire [31:0] ID_IMM32;
    wire [4:0] ID_A3;// ID阶段的A3,向后传递用
    wire [31:0] ID_WD; // ID阶段的写入数据,向后传递
    wire [1:0] ID_A1_USE; 
    wire [1:0] ID_A2_USE; 
    wire ID_MD;
    wire [4:0] ID_EX_ExcCode;
    wire [31:0] EPC_out;
    wire ID_Eret;
    ID uvv3(
        .clk(clk),
        .reset(reset),
        .IF_PC(IF_PC), // IF区的PC,用于正常的地址+4操作
        .ID_PC(ID_PC), // ID区的PC
        .ID_instr(ID_instr), // ID区的指令
        .ID_RD1_forward(ID_RD1_forward), // 转发的Data1(来源:Hazard Ctrl)
        .ID_RD2_forward(ID_RD2_forward), // 转发的Data2(来源:Hazard Ctrl)
        .ID_ExcCode(ID_ExcCode),
        .WB_WD(WB_WD), // 写入数据,来自于WB阶段
        .WB_A3(WB_A3), // 写入寄存器地址,来自于WB阶段
        .WB_PC(WB_PC), // 写入数据对应PC地址,传递给$display语句,作为显示,来自于WB阶段
        .EPC_out(EPC_out),
        .ID_RD1(ID_RD1), // ID输出rs寄存器读出值
        .ID_RD2(ID_RD2), // ID输出rt寄存器读出值
        .ID_IMM32(ID_IMM32), // ID输出经过位扩展的立即数
        .ID_A3(ID_A3), //ID阶段的A3,向后传递用
        .ID_WD(ID_WD), // ID阶段的写入数据,向后传递
        .ID_NPC(ID_NPC), // ID阶段(内部NPC模块)计算的下一个地址
        .ID_A1_USE(ID_A1_USE), // ID阶段rs寄存器的$T_{USE}$
        .ID_A2_USE(ID_A2_USE), // ID阶段rt寄存器的$T_{USE}$
        .ID_MD(ID_MD),
        .ID_EX_ExcCode(ID_EX_ExcCode),
        .ID_OP(ID_OP),
        .IF_ID_FLUSH(IF_ID_FLUSH),
        .ID_Eret(ID_Eret)
    );

    /*ID,EX间流水寄存器*/
    wire Enable_ID_EX;
    wire Flush_ID_EX; // 冲洗信号
    wire [31:0] EX_PC;
    wire [31:0] EX_instr;
    wire [31:0] EX_RD1;
    wire [31:0] EX_RD2;
    wire [31:0] EX_imm32;
    wire [4:0] EX_A3;
    wire [31:0] EX_WD;
    wire EX_BD;
    wire [4:0] EX_ExcCode;
    ID_EX uvv4(
        .clk(clk),
        .reset(reset),
        .enable(Enable_ID_EX),
        .req(req),
        .flush(Flush_ID_EX), // 冲洗信号
        .ID_PC(ID_PC),
        .ID_instr(ID_instr),
        .ID_RD1(ID_RD1_forward),
        .ID_RD2(ID_RD2_forward),
        .ID_imm32(ID_IMM32),
        .ID_A3(ID_A3),
        .ID_WD(ID_WD),
        .ID_BD(ID_BD),
        .ID_EX_ExcCode(ID_EX_ExcCode),
        .EX_PC(EX_PC),
        .EX_instr(EX_instr),
        .EX_RD1(EX_RD1),
        .EX_RD2(EX_RD2),
        .EX_imm32(EX_imm32),
        .EX_A3(EX_A3),
        .EX_WD(EX_WD),
        .EX_BD(EX_BD),
        .EX_ExcCode(EX_ExcCode)
    );

    /*Execute
    模块:ALU,EX_Control
    */
    wire [31:0] EX_RD1_forward;
    wire [31:0] EX_RD2_forward;
    wire [31:0] EX_MEM_RES;
    wire [31:0] EX_MEM_WD;
    wire [31:0] EX_MEM_RD2;
    wire [1:0] EX_NEW;
    wire MULT_DIV_BUSY;
    wire MULT_DIV_START;
    wire [4:0] EX_MEM_ExcCode;
    wire EX_MTC0;
    EX uvv5(
        .clk(clk),
        .reset(reset),
        .EX_instr(EX_instr), // EX阶段的指令
        .EX_imm32(EX_imm32), // 32位扩展的立即数
        .EX_WD(EX_WD), // EX阶段接收的写入寄存器堆的数据
        .EX_RD1_forward(EX_RD1_forward), // 接收hazard ctrl部件向EX阶段传递的转发数据寄存器A1值
        .EX_RD2_forward(EX_RD2_forward), // 接收hazard ctrl部件向EX阶段传递的转发数据寄存器A2值
        .EX_ExcCode(EX_ExcCode),
        .EX_MEM_RES(EX_MEM_RES), // 传递ALU计算结果
        .EX_MEM_WD(EX_MEM_WD), // 传递给EX_MEM流水寄存器的Write Data
        .EX_MEM_RD2(EX_MEM_RD2), // 传递给EX_MEM流水寄存器的Read Data2
        .EX_NEW(EX_NEW), // EX阶段的$T_{NEW}$
        .MULT_DIV_BUSY(MULT_DIV_BUSY),
        .MULT_DIV_START(MULT_DIV_START),
        .EX_MEM_ExcCode(EX_MEM_ExcCode),
        .EX_MTC0(EX_MTC0)
    );

    /*EX,MEM间流水寄存器*/
    wire Flush_EX_MEM;
    wire [31:0] MEM_PC;
    wire [31:0] MEM_instr;
    wire [4:0] MEM_A3;
    wire [31:0] MEM_WD;
    wire [31:0] MEM_RES;
    wire [31:0] MEM_RD2;
    wire [4:0] MEM_ExcCode;
    EX_MEM uvv6(
        .clk(clk),
        .reset(reset),
        .flush(Flush_EX_MEM), //冲洗EX,MEM间流水寄存器的信号
        .req(req),
        .EX_PC(EX_PC), // EX阶段PC地址
        .EX_instr(EX_instr),
        .EX_A3(EX_A3),
        .EX_RES(EX_MEM_RES),
        .EX_RD2(EX_MEM_RD2),
        .EX_WD(EX_MEM_WD),
        .EX_BD(EX_BD),
        .EX_MEM_ExcCode(EX_MEM_ExcCode),
        .MEM_PC(MEM_PC),
        .MEM_instr(MEM_instr),
        .MEM_A3(MEM_A3),
        .MEM_WD(MEM_WD),
        .MEM_RES(MEM_RES),
        .MEM_RD2(MEM_RD2),
        .MEM_BD(MEM_BD),
        .MEM_ExcCode(MEM_ExcCode)
    );

    /*Memory,存储
    模块:DM,DM_CTRL
    */
    wire [31:0] MEM_RD2_forward;
    wire [4:0] MEM_WB_A3;
    wire [31:0] MEM_WB_WD;
    wire [1:0] MEM_A2_NEW;
    wire [3:0] MEM_BYTE_EN;
    wire [4:0] MEM_WB_ExcCode;
    wire CP0_enable;
    wire [4:0] mfc0_rd;
    wire [31:0] CP0_out;
    wire MEM_MTC0;
    MEM uvv7(
        .clk(clk),
        .reset(reset),
        .req(req),
        .MEM_PC(MEM_PC),
        .MEM_instr(MEM_instr),
        .MEM_RES(MEM_RES),
        .MEM_RD2_forward(MEM_RD2_forward),
        .MEM_A3(MEM_A3),
        .RD(m_data_rdata),
        .MEM_ExcCode(MEM_ExcCode),
        .MEM_WD(MEM_WD),
        .CP0_out(CP0_out),
        .MEM_WB_A3(MEM_WB_A3),
        .MEM_WB_WD(MEM_WB_WD),
        .MEM_A2_NEW(MEM_A2_NEW),
        .MEM_BYTE_EN(m_data_byteen),
        .MEM_WRITE_DATA(m_data_wdata),
        .MEM_DATA_ADDR(m_data_addr),
        .MEM_INST_ADDR(m_inst_addr),
        .MEM_WB_ExcCode(MEM_WB_ExcCode),
        .mfc0_rd(mfc0_rd),
        .CP0_enable(CP0_enable),
        .EXL_clr(EXL_clr),
        .MEM_MTC0(MEM_MTC0)
    );

    /*MEM,WB间流水寄存器*/
    wire [31:0] WB_instr;
    assign w_grf_we = 1;
    assign w_grf_addr = WB_A3;
    assign w_grf_wdata = WB_WD;
    assign w_inst_addr = WB_PC;
    MEM_WB uvv8(
        .clk(clk),
        .reset(reset),
        .req(req),
        .MEM_PC(MEM_PC),
        .MEM_instr(MEM_instr),
        .MEM_A3(MEM_WB_A3),
        .MEM_WD(MEM_WB_WD),
        .WB_PC(WB_PC),
        .WB_instr(WB_instr),
        .WB_A3(WB_A3),
        .WB_WD(WB_WD)
    );

    /*冒险控制模块*/
    wire [4:0] ID_A1;
    wire [4:0] ID_A2;
    assign ID_A1 = ID_instr[25:21];
    assign ID_A2 = ID_instr[20:16];
    wire [4:0] EX_A1;
    wire [4:0] EX_A2;
    assign EX_A1 = EX_instr[25:21];
    assign EX_A2 = EX_instr[20:16];
    wire [4:0] MEM_A2;
    assign MEM_A2 = MEM_instr[20:16];
    HAZARD_CTRL uvv9(
        // ID
        .ID_A1(ID_A1),
        .ID_A2(ID_A2),
        .ID_RD1(ID_RD1),
        .ID_RD2(ID_RD2),
        .ID_A1_USE(ID_A1_USE),
        .ID_A2_USE(ID_A2_USE),
        .ID_MD(ID_MD),
        .ID_Eret(ID_Eret),
        // EX
        .EX_A1(EX_A1),
        .EX_A2(EX_A2),
        .EX_RD1(EX_RD1),
        .EX_RD2(EX_RD2),
        .EX_NEW(EX_NEW),
        .EX_A3(EX_A3),
        .EX_WD(EX_WD),
        .MULT_DIV_BUSY(MULT_DIV_BUSY),
        .MULT_DIV_START(MULT_DIV_START),
        .EX_MTC0(EX_MTC0),
        // MEM
        .MEM_A2(MEM_A2),
        .MEM_RD2(MEM_RD2),
        .MEM_A2_NEW(MEM_A2_NEW),
        .MEM_A3(MEM_A3),
        .MEM_WD(MEM_WD),
        .MEM_MTC0(MEM_MTC0),
        // WB
        .WB_A3(WB_A3),
        .WB_WD(WB_WD),
        // 转发
        .ID_RD1_forward(ID_RD1_forward),
        .ID_RD2_forward(ID_RD2_forward),
        .EX_RD1_forward(EX_RD1_forward),
        .EX_RD2_forward(EX_RD2_forward),
        .MEM_RD2_forward(MEM_RD2_forward),
        // Signals控制流水间寄存器和PC的信号
        .Enable_PC(Enable_PC),
        .Enable_IF_ID(Enable_IF_ID),
        .Enable_ID_EX(Enable_ID_EX),
        .Flush_ID_EX(Flush_ID_EX),
        .Flush_EX_MEM(Flush_EX_MEM)
    );

    CP0 cp0(
        .clk(clk),
        .reset(reset),
        .enable(CP0_enable),
        .CP0_addr(mfc0_rd),
        .CP0_in(WB_WD),
        .CP0_out(CP0_out), // out
        .VPC(MEM_PC),
        .BD_in(MEM_BD),
        .ExcCode_in(MEM_WB_ExcCode),
        .HW_Int(HW_Int),
        .EXL_clr(EXL_clr),
        /*output*/
        .EPC_out(EPC_out),
        .Req(req),
        .macroscopic_pc(macroscopic_pc)
    );
endmodule