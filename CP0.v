/*分别对应六个外部中断，相应位置 1 表示允许中断，置 0 表示禁止中断。
  这是一个被动的功能，只能通过 mtc0 这个指令修改，
  通过修改这个功能域，我们可以屏蔽一些中断。*/
`define IM SR[15:10] // $12 
/*任何异常发生时置位，这会强制进入核心态
  （也就是进入异常处理程序）并禁止中断。*/
`define EXL SR[1]
/*IE（Interrupt Enable）
  全局中断使能，该位置 1 表示允许中断，
  置 0 表示禁止中断。*/
`define IE SR[0]
/*BD（Branch Delay）
  当该位置 1 的时候，EPC 指向当前指令的前一条指令（一定为跳转），
  否则指向当前指令。*/
`define BD Cause[31] // $13
/*IP（Interrupt Pending）为 6 位待决的中断位，分别对应 6 个外部中断，
  相应位置 1 表示有中断，置 0 表示无中断，
  将会每个周期被修改一次，修改的内容来自计时器和外部中断。*/
`define IP Cause[15:10]
/*ExcCode	6:2	异常编码，记录当前发生的是什么异常。*/
`define ExcCode Cause[6:2]

module CP0(
    input wire clk, // 时钟信号
    input wire reset, // 复位信号
    input wire enable, // 写使能信号
    input wire [4:0] CP0_addr, // 寄存器地址
    input wire [31:0] CP0_in, // CP0写入数据
    output wire [31:0] CP0_out, // CP0读出数据
    input wire [31:0] VPC, // 受害PC
    input wire BD_in, // 是否是延迟槽指令
    input wire [4:0] ExcCode_in, // 记录异常类型
    input wire [5:0] HW_Int, // 输入中断信号
    input wire EXL_clr, // EXL复位信号
    output wire [31:0] EPC_out, // EPC的值
    output wire Req, // 进入处理程序请求信号
    output wire [31:0] macroscopic_pc
);
    reg [31:0] SR; // 12
    reg [31:0] Cause; // 13
    reg [31:0] EPC; // 14
    initial begin
        SR = 32'b0;
        Cause = 32'b0;
        EPC = 32'b0;
    end
    always @(posedge clk)begin
        if (reset)begin
            SR <= 32'b0;
            Cause <= 32'b0;
            EPC <= 32'b0;
        end
        else begin
            if (EXL_clr)begin
                // 复位EXL
                `EXL <= 1'b0;
            end
            if (Req)begin
                // 检测到异常或者中断
                `EXL <= 1'b1;
                `IE <= 1'b1;
                `BD <= BD_in;
                `IP <= HW_Int;
                `ExcCode <= (IntReq) ? 5'd0 : ExcCode_in;
                EPC <= (BD_in == 1) ? VPC - 32'D4 : VPC;
            end
            else if (enable)begin
                // 写入CP0寄存器
                if (CP0_addr == 5'd12)begin
                    SR <= CP0_in;
                end
                else if (CP0_addr == 5'd13)begin
                    Cause <= CP0_in;
                end
                else if (CP0_addr == 5'd14)begin
                    EPC <= CP0_in;
                end
            else begin
                $display("Wrong register path in CP0!!!\n");
            end
        end
      end
    end

    /*优先级:reset>Req>flush/stall
    */
    // 异常中断请求
    wire ExcReq;
    // 外设中断信号
    wire IntReq;
    assign ExcReq = (`EXL == 1'b0 && ExcCode_in != 5'b0) ? 1 : 0;
    assign IntReq = (`EXL == 1'b0 && `IE == 1'b1 && |(`IM & HW_Int)) ? 1 : 0;
    assign Req = (ExcReq || IntReq) ? 1 : 0;

    assign CP0_out = (CP0_addr == 5'd12) ? SR :
                     (CP0_addr == 5'd13) ? Cause :
                     (CP0_addr == 5'd14) ? EPC :
                     32'bz;
   
    assign EPC_out = EPC;

    assign macroscopic_pc = VPC;
endmodule