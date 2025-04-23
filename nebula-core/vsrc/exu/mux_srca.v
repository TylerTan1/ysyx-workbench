module ysyx_25040101_mux_srca(
	/* from ctrl_unit */
	input  wire[1:0] 	srca_ctrl_i,

	/* from regs */
	input  wire[31:0] rs1_data_i,

	/* from pc_reg */
	input  wire[31:0] pc_i,

	/* to alu */
	output wire[31:0] srca_data_o
);
	mux #(
		.NR_KEY(3),
		.KEY_LEN(2),
		.DATA_LEN(32)
	) mux_srca (
		.out(srca_data_o),
		.key(srca_ctrl_i),
		.lut({
			2'b00, rs1_data_i,
			2'b01, pc_i,
			2'b10, 32'b0
		})
	);
endmodule
