module ysyx_25040101_next_pc_mux(
	input wire [31:0] raw_next_pc_i,
	input wire [31:0] mtvec_i,
	input wire [31:0] mepc_i,
	input wire 				is_ecall_i,
	input wire				is_mret_i,
	output reg [31:0] next_pc_o
);
	always @(*) begin
		next_pc_o = raw_next_pc_i;
		if (is_ecall_i) begin
			next_pc_o = mtvec_i;
		end else if (is_mret_i) begin
			next_pc_o = mepc_i;
		end
	end
endmodule
