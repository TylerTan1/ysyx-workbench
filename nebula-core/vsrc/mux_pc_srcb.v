module ysyx_25040101_mux_pc_srcb(
	input wire[31:0] imm_i,
	input wire			 pc_srcb_ctrl_i,
	output wire[31:0] pc_srcb_o
);
	mux #(
		.NR_KEY(2),
		.KEY_LEN(1),
		.DATA_LEN(32)
	) mux_pc_srcb (
		.out(pc_srcb_o),
		.key(pc_srcb_ctrl_i),
		.lut({
			1'b0, 32'd4,
			1'b1, imm_i
		})
	);
endmodule		
