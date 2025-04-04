module ifetch(
	// from pc_reg
	input wire[31:0] pc_i,
	// to rom
	input wire[31:0] rom_inst,
	// from rom
	output wire[31:0] pc_addr_o,
	// to if_id
	output wire [31:0] inst_o,
	output wire [31:0] inst_addr_o
);
	assign pc_addr_o = pc_i;
	assign inst_addr_o = pc_i;
	assign inst_o = rom_inst;
endmodule
