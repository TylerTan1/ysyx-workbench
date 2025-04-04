module pc_reg(
	input wire clk,
	input wire rst_n,
	// to ifetch
	output reg[31:0] pc
);
	always @(posedge clk) begin
		if (!rst_n) 
			pc <= 32'h80000000;
	  else 
			pc <= pc + 32'd4;
	end
endmodule
