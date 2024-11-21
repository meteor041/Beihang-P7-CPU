`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:45:20 11/05/2024 
// Design Name: 
// Module Name:    PC 
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
module PC(
    input wire clk,
    input wire reset,
    input wire enable,
    input wire req,
    input wire [31:0] NPC,
    output wire [31:0] PC
    );

    reg [31:0] reg_pc;
    initial begin
      	reg_pc=32'h3000;
    end

    always @(posedge clk)begin
		if (reset) begin
			reg_pc<=32'h3000 ;// PC重置
		end
		else if (req)begin
			reg_pc <= 32'h4180; // 跳转至32'H4180,处理异常逻辑代码
		end
		else if (enable) begin
			reg_pc<=NPC;
		end
    end

    assign PC = reg_pc;
endmodule
