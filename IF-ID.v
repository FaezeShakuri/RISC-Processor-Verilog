`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:31:33 11/14/2020 
// Design Name: 
// Module Name:    IF-ID 
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
module IF_ID(clk, addr_in, instr_in, hit_fetch_in, addr_out, instr_out);
	
	input clk;
	input [15:0] addr_in, instr_in;
	input hit_fetch_in;
	
	output reg [15:0] addr_out, instr_out;
	
	initial instr_out = 16'h0000;
	// Read
	always @ (negedge clk) 
	begin
		if (hit_fetch_in) begin
			addr_out 	  <= addr_in;
			instr_out 	  <= instr_in;
		end
	end
	
endmodule
