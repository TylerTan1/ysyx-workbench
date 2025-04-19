module ysyx_25040101_pc_plus (
	/* from pc_reg */
	input wire[31:0] pc_i,
	/* from regs */
	input wire[31:0] rs1_data_i,
	/* from extend */
	input wire[31:0] imm_i,
	/* from ctrl_unit */
	input wire[1:0] pc_ctrl_i,
	/* to pr_reg */
	output wire[31:0] next_pc_o
);
	mux #(
		.NR_KEY(3),
		.KEY_LEN(2),
		.DATA_LEN(32)
	) mux_extend (
		.out(next_pc_o),
		.key(pc_ctrl_i),
		.lut({
			2'b00, pc_i + 4,
			2'b01, pc_i + imm_i,
			2'b10, rs1_data_i + imm_i	
		})
	);	
endmodule
