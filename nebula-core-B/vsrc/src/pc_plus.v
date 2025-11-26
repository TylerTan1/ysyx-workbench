module ysyx_25040101_pc_plus (
	/* from mux_pc_srca */
	input wire[31:0] pc_srca_i,
	/* from mux_pc_srcb */
	input wire[31:0] pc_srcb_i,
	/* from ctrl_unit */
	input wire			 pc_ctrl_i,
	/* to pr_reg */
	output wire[31:0] raw_next_pc_o
);
	wire[31:0] pc_plus_result = pc_srca_i + pc_srcb_i;
	mux #(
		.NR_KEY(2),
		.KEY_LEN(1),
		.DATA_LEN(32)
	) mux_extend (
		.out(raw_next_pc_o),
		.key(pc_ctrl_i),
		.lut({
			1'b0, pc_plus_result,
			1'b1, pc_plus_result & (~1)
		})
	);	
endmodule
