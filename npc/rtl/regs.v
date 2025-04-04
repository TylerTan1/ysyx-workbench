module regs #(ADDR_WIDTH = 5, DATA_WIDTH = 32) (
  input clk,
	// from exe
  input [DATA_WIDTH-1:0] rd_data_i,
  input [ADDR_WIDTH-1:0] rd_addr_i,
  input rd_wen,
	// from idecode
	input [ADDR_WIDTH-1:0] rs1_addr_i,
	input [ADDR_WIDTH-1:0] rs2_addr_i,
	// to idecode 
	output [DATA_WIDTH-1:0] rs1_data_o,
	output [DATA_WIDTH-1:0] rs2_data_o
);
  reg [DATA_WIDTH-1:0] regs [2**ADDR_WIDTH-1:0];

  always @(posedge clk) begin
    if (rd_wen) rf[rd_addr_i] <= rd_data_i;
  end

	always @(*) begin
		if (rs1_addr_i == 5'b0)
			rs1_data_o = 0;
		else 
			rs1_data_o = regs[rs1_addr_i];

		if (rs2_addr_i == 5'b0)
			rs2_data_o = 0;
		else
			rs2_data_o = regs[rs2_addr_i];
	end
endmodule

