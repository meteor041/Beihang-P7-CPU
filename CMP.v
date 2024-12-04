`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:26:07 11/05/2024 
// Design Name: 
// Module Name:    CMP 
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
module CMP(
    input wire [31:0] A,
    input wire [31:0] B,
    input wire [3:0] CMPControl,
    output zero
    );
    // bnumeq
    reg [31:0] a_cnt;
    reg [31:0] b_cnt;
    integer i;
    always @(*)begin
        a_cnt = 0;
        b_cnt = 0;
        for (i=0;i<32;i=i+1)begin
            if (A[i] == 1)begin
                a_cnt = a_cnt + 1;
            end
            else begin
                a_cnt = a_cnt;
            end
            if (B[i] == 1)begin
                b_cnt = b_cnt + 1;
            end
            else begin
                b_cnt = b_cnt;
            end
        end
    end
    assign zero = (CMPControl == `cmpBeq)  ? (A == B) :
                  (CMPControl == `cmpBgez) ? (A >= 32'b0):
                  (CMPControl == `cmpBgtz) ? (A > 32'b0) :
                  (CMPControl == `cmpBlez) ? (A <= 32'b0) :
                  (CMPControl == `cmpBltz) ? (A < 32'b0) :
                  (CMPControl == `cmpBne)  ? (A != B) :
                  (CMPControl == `bnumeq) ? (a_cnt == b_cnt) : 
                  1'bz;
endmodule
