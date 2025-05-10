module ysyx_25040101_mux_srcb(
	// from ctrl_unit
	input wire[2:0] srcb_ctrl_i,
	// from regs
	input wire[31:0] rs2_data_i,
	// from extend
	input wire[31:0] imm_i,
	// to alu
	output wire[31:0] srcb_data_o
);
	mux #(
		.NR_KEY(4),
		.KEY_LEN(3),
		.DATA_LEN(32)
	) mux_srcb (
		.out(srcb_data_o),
		.key(srcb_ctrl_i),
		.lut({
			3'b000, rs2_data_i,
			3'b001, imm_i,
			3'b010, 32'd4,
			3'b100, { 27'b0, rs2_data_i[4:0] }
		})
	);
endmodule
