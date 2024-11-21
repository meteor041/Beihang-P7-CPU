`timescale 1ns / 1ps

//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:43:39 12/28/2017 
// Design Name: 
// Module Name:    TC 
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
`define IDLE 2'b00
`define LOAD 2'b01
`define CNT  2'b10
`define INT  2'b11

`define ctrl   mem[0] // 控制寄存器
`define preset mem[1] // 初值寄存器
`define count  mem[2] // 计数器
module TC(
    input wire clk, // 时钟信号
    input wire reset, // 复位信号
    input wire [31:2] Addr, // 地址输入
    input wire WE, // 写使能
    input wire [31:0] Din, // 32位数据输入
    output wire [31:0] Dout, // 32位数据输出
    output wire IRQ // 中断请求
    );
/*------------------------------三个寄存器综合模块---------------------------------------*/
	reg [31:0] mem [2:0];

/*------------------------------------控制寄存器-------------------------*/
	reg IEn; // 中断
	reg CntEn; // 计数使能信号
	reg [1:0] Mode; // 计数模式
	always @(*)begin
	  IEn = `ctrl[3];
	  Mode = `ctrl[2:1];
	  CntEn = `ctrl[0];
	end

/*-----------------计数器模块当前处于的状态------------------------------------------*/
	reg [1:0] state;

/*-------------------------------------中断请求------------------------------------------*/
	/*当计数器工作在模式0并且在中断允许的前提下，当计数器计数值为0时，
								中断产生逻辑产生中断请求(IRQ为1)*/
	reg _IRQ;
	assign IRQ = IEn & _IRQ;

/*------------------------------Dout:32位数据输出------------------------------------------------*/	
	assign Dout = mem[Addr[3:2]];

/*------------------------------load:写入TC寄存器值------------------------------------------------*/
	wire [31:0] load = Addr[3:2] == 0 ? {28'h0, Din[3:0]} : Din;

/*------------------------------状态机------------------------------------------------*/
	integer i;
	always @(posedge clk) begin
		if(reset) begin
			state <= 0; 
			for(i = 0; i < 3; i = i+1) mem[i] <= 0;
			_IRQ <= 0;
		end
		else if(WE) begin
			/* 使用store类指令修改 TC 寄存器值的优先级高于 TC 自修改的优先级 */
			// $display("%d@: *%h <= %h", $time, {Addr, 2'b00}, load);
			mem[Addr[3:2]] <= load;
		end
		else begin
			case(state)
				`IDLE : if(CntEn) begin // IDLE: 空闲状态。当使能CntEn被设置为1后，初值寄存器值再次被加载至计数器，计数器重新启动倒计数。
					state <= `LOAD; // 进入加载数据的状态
					_IRQ <= 1'b0; // 取消中断信号
				end
				`LOAD : begin
					`count <= `preset; // present:初值寄存器, count:计数器寄存器
					state <= `CNT; // 进入计数状态
				end
				`CNT  : 
					if(CntEn) begin// 计数器使能.1:允许计数
						if(`count > 1) begin
						  `count <= `count-1; // 正常减1
						end
						else begin
							/*，在计数为0后，计数器或者自动装填初值并重新倒计
							数，或者保持在0值直至计数器使能再次被设置为1*/
							`count <= 0; // count清零(由1减1得0)
							state <= `INT; // 
							_IRQ <= 1'b1;
						end
					end
					else begin 
						/* 当计数器计数时，若计数器使能被 store 类指令修改为 0 则停止计数。*/
						state <= `IDLE;  
					end
				default : begin
					if(Mode == 2'b00) //方式0,当计数器倒计数为0后，计数器停止计数，此时控制寄存器中的使能Enable自动变为0。
						CntEn <= 1'b0;
					else 
						_IRQ <= 1'b0; // 方式1,当计数器倒计数为0后，初值寄存器值被自动加载至计数器，计数器继续倒计数。
					state <= `IDLE; // 进入空闲状态
				end
			endcase
		end
	end

endmodule
