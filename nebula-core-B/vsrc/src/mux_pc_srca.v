module ysyx_25040101_mux_pc_srca(
	input  wire[31:0] pc_i,
	input  wire[31:0] rs1_data_i,
	input  wire			  pc_srca_ctrl_i,
	output wire[31:0] pc_srca_o
);
	mux #(
		.NR_KEY(2),
		.KEY_LEN(1),
		.DATA_LEN(32)
	) mux_pc_srca (
		.out(pc_srca_o),
		.key(pc_srca_ctrl_i),
		.lut({
			1'b0, pc_i,
			1'b1, rs1_data_i
		})
	);
endmodule
