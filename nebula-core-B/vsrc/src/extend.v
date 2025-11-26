module ysyx_25040101_extend(
	/* from rom */
	input  wire[31:7] raw_imm_i,
	/* from ctrl_unit */
	input  wire[5:0]	imm_type_i,
	/* to mux_srcb and pc_plus */
	output wire[31:0]  imm_o
);
	wire [31:0] imm_i_type  = { {20{raw_imm_i[31]}}, raw_imm_i[31:20] };
	wire [31:0] imm_s_type  = { {20{raw_imm_i[31]}}, raw_imm_i[31:25], raw_imm_i[11:7] };
	wire [31:0] imm_b_type  = { {20{raw_imm_i[31]}}, raw_imm_i[7], raw_imm_i[30:25], raw_imm_i[11:8], 1'b0 };
	wire [31:0] imm_u_type  = { raw_imm_i[31:12], 12'b0 };
	wire [31:0] imm_j_type  = { {11{raw_imm_i[31]}}, raw_imm_i[31], raw_imm_i[19:12], raw_imm_i[20], raw_imm_i[30:21], 1'b0 };
	wire [31:0] imm_shamt   = { 26'b0, raw_imm_i[25:20] };
	
	assign imm_o =
  	(imm_type_i[0]) ? imm_shamt :  					 // 100001 (shamt)
  	({32{imm_type_i[5]}} & imm_i_type)  |    // 100000 (I-type)
  	({32{imm_type_i[4]}} & imm_s_type)  |    // 010000 (S-type)
  	({32{imm_type_i[3]}} & imm_b_type)  |    // 001000 (B-type)
  	({32{imm_type_i[2]}} & imm_u_type)  |    // 000100 (U-type)
  	({32{imm_type_i[1]}} & imm_j_type);      // 000010 (J-type)
endmodule
