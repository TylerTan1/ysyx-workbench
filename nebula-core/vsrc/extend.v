module ysyx_25040101_extend(
	/* from rom */
	input  wire[31:7] inst_i,
	/* from ctrl_unit */
	input  wire[4:0]	imm_type_i,
	/* to mux_srcb */
	output reg[31:0]  imm_o
);
	/* a multiplexer to choose imm_o based on imm_type_i */
	/* TODO: 此处对于独热编码是否有更好的选择方式? */
	mux #(
		.NR_KEY(5),
		.KEY_LEN(5),
		.DATA_LEN(32)
	) mux_extend (
		.out(imm_o),
		.key(imm_type_i),
		.lut({
			5'b10000, { {20{inst_i[31]}}, inst_i[31:20] },																				// I
			5'b01000,{ {20{inst_i[31]}}, inst_i[31:25], inst_i[11:7] },														// S
			5'b00100,{ {21{inst_i[31]}}, inst_i[7], inst_i[30:25], inst_i[11:8] },								// B
			5'b00010,{ inst_i[31:12], {12{1'b0}} },																					// U  notice: already shift left 12 digits
			5'b00001,{ {12{inst_i[31]}}, inst_i[31], inst_i[19:12], inst_i[20], inst_i[30:21] }		// J
		})
	);	
endmodule
