module ysyx_25040101_alu(
	// from regs
	input wire[31:0] srca_data_i,
	// from mux_srcb
	input wire[31:0] srcb_data_i,
	// from ctrl_unit
	input wire[1:0]	 alu_ctrl_i,
	// to regs/ram
	output wire[31:0] alu_result_o
);
	wire[31:0] srcb;
	wire[31:0] result_add_sub;
	
	assign srcb = srcb_data_i ^ {32{alu_ctrl_i[1]}};
	assign result_add_sub = srca_data_i + srcb + { {31{1'b0}}, alu_ctrl_i[0] };

	/* TODO: 此处对于独热编码有无更好的解码方式? */
	mux #(
		.NR_KEY(2),
		.KEY_LEN(2),
		.DATA_LEN(32)
	) mux_result (
		.out(alu_result_o),
		.key(alu_ctrl_i),
		.lut({
			2'b01, result_add_sub,
			2'b10, result_add_sub
		})
	);

endmodule
