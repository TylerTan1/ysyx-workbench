`include "defines.v"

module if_id(
	input wire clk,
	input wire rst_n,
	// from ifetch
	input wire[31:0] inst_addr_i,
	input wire[31:0] inst_i,
	// to idecode
	output wire[31:0] inst_addr_o,
	output wire[31:0] inst_o
);
	dff #(
		WIDTH = 32,
	  RESET_VAL = INST_NOP
	) dff1 (
		.clk(clk),
		.rst(rst_n),
		.din(inst_i),
		.dout(inst_o),
		.wen(1)
	);
	
	dff #(
		WIDTH = 32,
	  RESET_VAL = 32'b0
	) dff2 (
		.clk(clk),
		.rst(rst_n),
		.din(inst_addr_i),
		.dout(inst_addr_o),
		.wen(1)
	);	
