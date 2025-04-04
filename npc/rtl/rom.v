module rom(
	// from ifetch
	input wire[31:0] pc_addr,
	// from test_C++
	input wire[255:0] lut,
	// to ifetch
	output reg[31:0] rom_inst
);
	MuxKey #(
		.NR_KEY(4),
		.KEY_LEN(32),
		.DATA_LEN(32),
		.HAS_DEFAULT(0)
	) rom (
		.out(rom_inst),
		.key(pc_addr),
		.lut(lut)
	);
endmodule
