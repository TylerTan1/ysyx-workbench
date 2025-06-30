module ysyx_25040101_mux_srcb(
	// from ctrl_unit
	input wire[4:0] srcb_ctrl_i,
	// from regs
	input wire[31:0] rs2_data_i,
	// from extend
	input wire[31:0] imm_i,
	// from csr_regs
	input wire[31:0] csr_data_i,
	// to alu
	output wire[31:0] srcb_data_o
);
	mux #(
		.NR_KEY(6),
		.KEY_LEN(5),
		.DATA_LEN(32)
	) mux_srcb (
		.out(srcb_data_o),
		.key(srcb_ctrl_i),
		.lut({
			5'b00000, rs2_data_i,
			5'b00001, imm_i,
			5'b00010, 32'd4,
			5'b00100, { 27'b0, rs2_data_i[4:0] },
			5'b01000, csr_data_i,
			5'b10000, 32'b0
		})
	);
endmodule
