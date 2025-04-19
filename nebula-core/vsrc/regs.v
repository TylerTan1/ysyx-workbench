module ysyx_25040101_regs (
  input wire clk,
	input wire rst,
	// from exe
  input wire[31:0] rd_data_i,
  input wire[4:0] rd_addr_i,
  input rd_wen,
	// from idecode
	input wire[4:0] rs1_addr_i,
	input wire[4:0] rs2_addr_i,
	// to idecode 
	output wire[31:0] rs1_data_o,
	output wire[31:0] rs2_data_o,
	output wire[31:0] reg_a0_o
);
	// initial the registers except x0
  reg [31:0] regs [31:1];
	integer i;

	// ebreak code
	assign reg_a0_o = regs[10];

	// read
	assign rs1_data_o = (rs1_addr_i == 0) ? 0 : regs[rs1_addr_i];
	assign rs2_data_o = (rs2_addr_i == 0) ? 0 : regs[rs2_addr_i];

	// write
  always @(posedge clk or posedge rst) begin
		if (rst) 
			for (i = 1; i <= 31; i = i + 1)
				regs[i] <= 0;
		else if (rd_wen && rd_addr_i != 0) 
			regs[rd_addr_i] <= rd_data_i;
		else ;
  end
endmodule
