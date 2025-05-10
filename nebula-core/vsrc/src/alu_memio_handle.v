module ysyx_25040101_alu_memio_handle (
	/* from ctrl_unit */
	input wire read_1B_mem_en_i,
	input wire read_2B_mem_en_i,
	input wire read_2B_sext_mem_en_i,
	input wire read_4B_mem_en_i,
	input wire write_1B_mem_en_i,
	input wire write_2B_mem_en_i,
	input wire write_4B_mem_en_i,
	/* from alu */
	input wire[31:0] alu_result_i,
	/* from regs */
	input wire[31:0] rs2_data_i,	
	/* to regs */
	output reg[31:0] tmp_rd_data_o
);
	/* for memory read */
	import "DPI-C" function int pmem_read(input int raddr, input int num_byte, input bit sext);
	import "DPI-C" function void pmem_write(input int waddr, input int data, input int num_byte);

	always @(*) begin
		if (read_1B_mem_en_i) begin
			tmp_rd_data_o = pmem_read(alu_result_i, 1, 1'b0); 
		end else if (read_2B_mem_en_i) begin
			tmp_rd_data_o = pmem_read(alu_result_i, 2, 1'b0);
		end else if (read_2B_sext_mem_en_i) begin
			tmp_rd_data_o = pmem_read(alu_result_i, 2, 1'b1);
		end else if (read_4B_mem_en_i) begin
			tmp_rd_data_o = pmem_read(alu_result_i, 4, 1'b0);
		end else begin
			tmp_rd_data_o = alu_result_i;
		end
	end

	always @(*) begin
		if (write_1B_mem_en_i) begin
			pmem_write(alu_result_i, rs2_data_i, 1);
		end else if (write_2B_mem_en_i) begin
			pmem_write(alu_result_i, rs2_data_i, 2);
		end else if (write_4B_mem_en_i) begin
			pmem_write(alu_result_i, rs2_data_i, 4);
		end
	end
endmodule
