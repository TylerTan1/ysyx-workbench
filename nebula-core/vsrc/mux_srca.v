module ysyx_25040101_mux_srca(
	/* from ctrl_unit */
	input  wire 			srca_ctrl_i,

	/* from regs */
	input  wire[31:0] rs1_data_i,

	/* from pc_reg */
	input  wire[31:0] pc_i,

	/* to alu */
	output wire[31:0] srca_data_o
);
	mux #(
		.NR_KEY(2),
		.KEY_LEN(1),
		.DATA_LEN(32)
	) mux_srca (
		.out(srca_data_o),
		.key(srca_ctrl_i),
		.lut({
			1'b0, rs1_data_i,
			1'b1, pc_i
		})
	);
endmodule
