module ysyx_25040101_mux_srcb(
	// from ctrl_unit
	input wire[1:0] srcb_ctrl_i,
	// from regs
	input wire[31:0] rs2_data_i,
	// from extend
	input wire[31:0] imm_i,
	// to alu
	output wire[31:0] srcb_data_o
);
	mux #(
		.NR_KEY(3),
		.KEY_LEN(2),
		.DATA_LEN(32)
	) mux_srcb (
		.out(srcb_data_o),
		.key(srcb_ctrl_i),
		.lut({
			2'b00, rs2_data_i,
			2'b01, imm_i,
			2'b10, 32'd4
		})
	);
endmodule
