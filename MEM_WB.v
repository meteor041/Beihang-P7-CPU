`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:16:36 11/06/2024 
// Design Name: 
// Module Name:    MEM_WB 
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
module MEM_WB(
    input wire clk,
    input wire reset,
    input wire req,
    input wire [31:0] MEM_PC,
    input wire [31:0] MEM_instr,
    input wire [4:0] MEM_A3,
    input wire [31:0] MEM_WD,
    output reg [31:0] WB_PC,
    output reg [31:0] WB_instr,
    output reg [4:0] WB_A3,
    output reg [31:0] WB_WD
    );
    
    initial begin
        WB_PC = 32'b0;
        WB_instr = 32'b0;
        WB_A3 = 5'b0;
        WB_WD = 32'b0;
    end
    always @(posedge clk)begin
        if (reset || req)begin
            WB_PC = (req == 1) ? 32'h4180 : 32'h3000;
            WB_instr = 32'b0;
            WB_A3 = 5'b0;
            WB_WD = 32'b0;
        end
        else begin
            WB_PC = MEM_PC;
            WB_instr = MEM_instr;
            WB_A3 = MEM_A3;
            WB_WD = MEM_WD;
        end
    end

endmodule
