module ysyx_25040101_mux_srcb(
	// from ctrl_unit
	input wire alu_src_i,
	// from regs
	input wire[31:0] rs2_data_i,
	// from extend
	input wire[31:0] imm_i,
	// to alu
	output wire[31:0] srcb_data_o
);
	mux #(
		.NR_KEY(2),
		.KEY_LEN(1),
		.DATA_LEN(32)
	) mux_srcb (
		.out(srcb_data_o),
		.key(alu_src_i),
		.lut({
			1'b0, rs2_data_i,
			1'b1, imm_i
		})
	);
endmodule
