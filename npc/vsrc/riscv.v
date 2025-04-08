module ysyx_25040101_riscv(
	input wire clk,
	input wire rst,
	// to rom
	output wire[31:0] pc,
	// from rom
	input wire[31:0] inst
);
	wire[31:0] rd_data;
	wire			 rd_wen;
	wire[31:0] rs1_data;
	wire[31:0] rs2_data;
	wire[1:0]	 alu_ctrl;
	wire			 alu_src;
	wire[2:0]  imm_src;
	wire[31:0] imm;
	wire[31:0] srcb_data;


	ysyx_25040101_pc_reg pc_reg1(
		.clk(clk),
	 	.rst(rst),
		.pc_o(pc)
	);
	
	ysyx_25040101_regs regs1(
		.clk(clk),
		.rst(rst),
		.rd_data_i(rd_data),
		.rd_addr_i(inst[11:7]),
		.rd_wen(rd_wen),
		.rs1_addr_i(inst[19:15]),
		.rs2_addr_i(inst[24:20]),
		.rs1_data_o(rs1_data),
		.rs2_data_o(rs2_data)
	);

	ysyx_25040101_ctrl_unit ctrl_unit1(
		.opcode_i(inst[6:0]),
		.func3_i(inst[14:12]),
		.func7_i(inst[30]),
		.alu_ctrl_o(alu_ctrl),
		.alu_src_o(alu_src),
		.imm_src_o(imm_src),
		.rd_wen_o(rd_wen)
	);

	ysyx_25040101_extend extend1(
		.inst_i(inst[31:7]),
		.imm_src_i(imm_src),
		.imm_o(imm)
	);

	ysyx_25040101_mux_srcb mux_srcb1(
		.alu_src_i(alu_src),
		.rs2_data_i(rs2_data),
		.imm_i(imm),
		.srcb_data_o(srcb_data)
	);	

	ysyx_25040101_alu alu1(
		.srca_data_i(rs1_data),
		.srcb_data_i(srcb_data),
		.alu_ctrl_i(alu_ctrl),
		.alu_result_o(rd_data)
	);
endmodule
