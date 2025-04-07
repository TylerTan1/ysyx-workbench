module extend(
	// from rom
	input  wire[31:7] inst_i,
	// from ctrl_unit
	input  wire[2:0]	imm_src_i,
	output reg[31:0]  imm_o
);
	mux #(
		.NR_KEY(5),
		.KEY_LEN(3),
		.DATA_LEN(32)
	) mux_extend (
		.out(imm_o),
		.key(imm_src_i),
		.lut({
			3'b001, { {20{inst_i[31]}}, inst_i[31:20] },																				// I
			3'b010,{ {20{inst_i[31]}}, inst_i[31:25], inst_i[11:7] },														// S
			3'b011,{ {21{inst_i[31]}}, inst_i[7], inst_i[30:25], inst_i[11:8] },								// B
			3'b100,{ {12{inst_i[31]}}, inst_i[31:12] },																					// U
			3'b101,{ {12{inst_i[31]}}, inst_i[31], inst_i[19:12], inst_i[20], inst_i[30:21] }		// J
		})
	);	
endmodule
