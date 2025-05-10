module ysyx_25040101_extend(
	/* from rom */
	input  wire[31:7] raw_imm_i,
	/* from ctrl_unit */
	input  wire[5:0]	imm_type_i,
	/* to mux_srcb and pc_plus */
	output reg[31:0]  imm_o
);
	/* a multiplexer to choose imm_o based on imm_type_i */
	mux #(
		.NR_KEY(6),
		.KEY_LEN(6),
		.DATA_LEN(32)
	) mux_extend (
		.out(imm_o),
		.key(imm_type_i),
		.lut({
			/* notice: Type U has already shift left 12 digits */
			6'b100000, { {20{raw_imm_i[31]}}, raw_imm_i[31:20] },																										// I
			6'b010000, { {20{raw_imm_i[31]}}, raw_imm_i[31:25], raw_imm_i[11:7] },																	// S
			6'b001000, { {20{raw_imm_i[31]}}, raw_imm_i[7], raw_imm_i[30:25], raw_imm_i[11:8], 1'b0 },							// B
			6'b000100, { raw_imm_i[31:12], {12{1'b0}} },																														// U  
			6'b000010, { {11{raw_imm_i[31]}}, raw_imm_i[31], raw_imm_i[19:12], raw_imm_i[20], raw_imm_i[30:21], 1'b0 },		// J
			6'b100001, { 26'b0, raw_imm_i[25:20] }						// shamt
		})
	);	
endmodule
