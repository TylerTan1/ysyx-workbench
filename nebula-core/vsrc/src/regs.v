module ysyx_25040101_regs (
  input wire clk,
	input wire rst,
	/* from alu */
  input wire[31:0] rd_data_i,
	/* from rom */ 
  input wire[4:0] rd_addr_i,
	input wire[4:0] rs1_addr_i,
	input wire[4:0] rs2_addr_i,
	/* from ctrl_unit */
  input rd_wen_i,
	/* to mux_srca, mux_pc_srca */
	output wire[31:0] rs1_data_o,
	/* to mux_srcb */
	output wire[31:0] rs2_data_o,
	/* to top */
	output wire[31:1][31:0] regs_data_o
);
	/* initial the registers except x0 */
  reg[31:0] regs [31:1];

	genvar i;
	generate
		for (i = 1; i < 32; i = i + 1) begin
			assign regs_data_o[i] = regs[i];
		end
	endgenerate

	/* read */
	assign rs1_data_o = (rs1_addr_i == 0) ? 0 : regs[rs1_addr_i];
	assign rs2_data_o = (rs2_addr_i == 0) ? 0 : regs[rs2_addr_i];

	/* 防止verilator仿真导致的时序竞争的问题 */
	reg[31:0] rd_data;
	reg[4:0] rd_addr;
	reg rd_wen;
	always @(negedge clk) begin
		rd_data <= rd_data_i;
		rd_addr <= rd_addr_i;
		rd_wen <= rd_wen_i;
	end

	/* write */
  always @(posedge clk or posedge rst) begin
		if (rd_wen && rd_addr != 0) 
			regs[rd_addr] <= rd_data;
		else ;
  end
endmodule
