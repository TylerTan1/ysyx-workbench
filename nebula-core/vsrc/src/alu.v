module ysyx_25040101_alu(
	/* from regs */
	input wire[31:0] srca_data_i,
	/* from mux_srcb */
	input wire[31:0] srcb_data_i,
	/* from ctrl_unit */
	input wire[7:0]	 alu_ctrl_i,
	/* to alu_memio_handle */
	output wire[31:0] alu_result_o,
	/* to alu_result_handle */
	output wire borrow_o,
	output wire sub_overflow_o
);
	/* TODO optimize */ 
	wire is_sub = alu_ctrl_i[1];
	wire[31:0] srcb_eff = srcb_data_i ^ { 32{is_sub} };
  wire[32:0] extended_result = {1'b0, srca_data_i} + { 1'b0, srcb_eff } + { 32'b0, is_sub };
	assign borrow_o = ~extended_result[32];
	wire[31:0] result_add_sub = extended_result[31:0];
	wire sign_a = srca_data_i[31];
	wire sign_b = srcb_data_i[31];
	wire sign_res = result_add_sub[31];
	assign sub_overflow_o = (sign_a != sign_b) && (sign_res != sign_a);

	wire[31:0] result_sright_shift = ($signed(srca_data_i)) >>> srcb_data_i;
	wire[31:0] result_uright_shift = srca_data_i >> srcb_data_i; 
	wire[31:0] result_left_shift = srca_data_i << srcb_data_i;
	wire[31:0] result_bit_and = srca_data_i & srcb_data_i;
	wire[31:0] result_bit_or = srca_data_i | srcb_data_i;
	wire[31:0] result_bit_xor = srca_data_i ^ srcb_data_i;

	mux #(
		.NR_KEY(8),
		.KEY_LEN(8),
		.DATA_LEN(32)
	) mux_result (
		.out(alu_result_o),
		.key(alu_ctrl_i),
		.lut({
			8'b00000001, result_add_sub,
			8'b00000010, result_add_sub,
			8'b00000100, result_sright_shift,
			8'b00001000, result_uright_shift,
			8'b00010000, result_left_shift,
			8'b00100000, result_bit_and,
			8'b01000000, result_bit_or,
			8'b10000000, result_bit_xor
		})
	);
endmodule
