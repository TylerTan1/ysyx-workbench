module ysyx_25040101_riscv(
	input wire clk,
	input wire rst,
	// to rom
	output wire[31:0] next_pc,
	// from rom
	input wire[31:0] inst
);
	wire[31:0] pc;
	wire[31:0] rd_data;
	wire			 rd_wen;
	wire[31:0] rs1_data;
	wire[31:0] rs2_data;
	wire[1:0]	 alu_ctrl;
	wire[1:0]	 srca_ctrl;
	wire[1:0]	 srcb_ctrl;
	wire			 pc_ctrl;
	wire			 pc_srca_ctrl;
	wire			 pc_srcb_ctrl;
	wire[31:0] pc_srca;
	wire[31:0] pc_srcb;
	wire[4:0]  imm_type;
	wire[31:0] imm;
	wire[31:0] srca_data;
	wire[31:0] srcb_data;
	wire[31:0] reg_a0;


	ysyx_25040101_pc_reg pc_reg1(
		.clk(clk),
	 	.rst(rst),
		.next_pc_i(next_pc),
		.pc_o(pc)
	);

	ysyx_25040101_mux_pc_srca mux_pc_srca1(
		.pc_i(pc),
		.rs1_data_i(rs1_data),
		.pc_srca_ctrl_i(pc_srca_ctrl),
		.pc_srca_o(pc_srca)
	);

	ysyx_25040101_mux_pc_srcb mux_pc_srcb1(
		.imm_i(imm),
		.pc_srcb_ctrl_i(pc_srcb_ctrl),
		.pc_srcb_o(pc_srcb)
	);

  ysyx_25040101_pc_plus pc_plus1(
		.pc_srca_i(pc_srca),
		.pc_srcb_i(pc_srcb),
		.pc_ctrl_i(pc_ctrl),
		.next_pc_o(next_pc)
	);
	
	ysyx_25040101_regs regs1(
		.clk(clk),
		.rst(rst),
		.rd_data_i(rd_data),
		.rd_addr_i(inst[11:7]),
		.rd_wen_i(rd_wen),
		.rs1_addr_i(inst[19:15]),
		.rs2_addr_i(inst[24:20]),
		.rs1_data_o(rs1_data),
		.rs2_data_o(rs2_data),
		.reg_a0_o(reg_a0)	
	);

	ysyx_25040101_ctrl_unit ctrl_unit1(
		.opcode_i(inst[6:0]),
		.func3_i(inst[14:12]),
		.func7_i(inst[30]),
		.alu_ctrl_o(alu_ctrl),
		.srca_ctrl_o(srca_ctrl),
		.srcb_ctrl_o(srcb_ctrl),
		.pc_ctrl_o(pc_ctrl),
		.pc_srca_ctrl_o(pc_srca_ctrl),
		.pc_srcb_ctrl_o(pc_srcb_ctrl),
		.imm_type_o(imm_type),
		.rd_wen_o(rd_wen),
		.reg_a0_i(reg_a0)
	);

	ysyx_25040101_extend extend1(
		.raw_imm_i(inst[31:7]),
		.imm_type_i(imm_type),
		.imm_o(imm)
	);

	ysyx_25040101_mux_srca mux_srca1(
		.srca_ctrl_i(srca_ctrl),
		.rs1_data_i(rs1_data),
		.pc_i(pc),
		.srca_data_o(srca_data)
	);

	ysyx_25040101_mux_srcb mux_srcb1(
		.srcb_ctrl_i(srcb_ctrl),
		.rs2_data_i(rs2_data),
		.imm_i(imm),
		.srcb_data_o(srcb_data)
	);	

	ysyx_25040101_alu alu1(
		.srca_data_i(srca_data),
		.srcb_data_i(srcb_data),
		.alu_ctrl_i(alu_ctrl),
		.alu_result_o(rd_data)
	);
endmodule
