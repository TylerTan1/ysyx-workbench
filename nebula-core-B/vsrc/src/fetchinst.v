module ysyx_25040101_fetchinst(
  input      [31:0] pc_i,
  output reg [31:0] inst_o
);
  import "DPI-C" function int unsigned pmem_read(input int unsigned raddr, input int num_byte, input bit sext);
	
  always @(*) begin
    pmem_read(pc_i, 4, 1'b0);
  end
endmodule
