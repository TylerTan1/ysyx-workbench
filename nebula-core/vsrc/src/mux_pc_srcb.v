module ysyx_25040101_mux_pc_srcb(
	input wire[31:0] imm_i,
	input wire			 pc_srcb_ctrl_i,
	input wire			 pc_imm_ctrl_i,
	output wire[31:0] pc_srcb_o
);
	wire is_imm = (pc_srcb_ctrl_i || pc_imm_ctrl_i);
	mux #(
		.NR_KEY(2),
		.KEY_LEN(1),
		.DATA_LEN(32)
	) mux_pc_srcb (
		.out(pc_srcb_o),
		.key(is_imm),
		.lut({
			1'b0, 32'd4,
			1'b1, imm_i
		})
	);
endmodule		
