#include <memory.h> #include <generated/autoconf.h>

#include <fstream>
#include <chrono>
#include <ctime>

uint8_t *rom = NULL;			

/* initialize memory and load img */
size_t memory::init_rom(SimulationContext& ctx) {
	/* default instructions */
	std::vector<word_t> insts = {
		0x00200093, // addi x1, x0, 2
		0x00408093, // addi x1, x1, 4
		0x00108213, // addi x4, x1, 4
		0x00100073	// ebreak
	};

	const size_t rom_size = 0x08000000; 
  ctx.rom.resize(rom_size, 0); 

	if (ctx.img_file.empty()) {			
		/* load default instructions */
		std::cout << "Loading default instructions..." << std::endl;
 		size_t offset = 0;
    for (const auto& inst : insts) {
      ctx.rom[offset++] = (inst >> 0) & 0xFF;
      ctx.rom[offset++] = (inst >> 8) & 0xFF;
      ctx.rom[offset++] = (inst >> 16) & 0xFF;
      ctx.rom[offset++] = (inst >> 24) & 0xFF;
    }
		return insts.size() * sizeof(word_t); // return 16;
	}

	/* open image file */
	std::ifstream file (ctx.img_file, std::ios::binary);
	std::cout <<"Loading instructions from " << ctx.img_file << std::endl;
	if (!file) throw std::runtime_error("Failed to open file: " + ctx.img_file);
    
	/* record the size of the file */
	file.seekg(0, std::ios::end);
	const size_t file_size = file.tellg();
	file.seekg(0, std::ios::beg);			 
	assert(rom_size > file_size);

	/* load the img file */
	file.read(reinterpret_cast<char*>(ctx.rom.data()), file_size);
	if (!file) throw std::runtime_error("Failed to read file: " + ctx.img_file);

	/* get the pointer for other functions */
	rom = (uint8_t *)ctx.rom.data(); 

	return file_size;
}

/* return virtual address */
static word_t guest_to_host(word_t address) {
	return (address < 0x80000000) ? 0 : address - 0x80000000;
}

static bool have_read;
static word_t last_data;

/* set inst based on pc */
word_t memory::read(word_t address, SimulationContext& ctx) {
	have_read = false;
	word_t paddr = guest_to_host(address);
	if (paddr + 3 >= ctx.rom.size() || paddr < 0) {
    throw std::out_of_range("Address out of range");
  }
	word_t inst = 0;
  inst |= ctx.rom[paddr + 0] << 0;
  inst |= ctx.rom[paddr + 1] << 8;
  inst |= ctx.rom[paddr + 2] << 16;
  inst |= ctx.rom[paddr + 3] << 24; 

	return inst;
}

extern "C" word_t pmem_read(word_t raddr, int num_byte, bool sext) {
	if (have_read) return last_data;
#ifdef CONFIG_MTRACE_READ
	printf("read memory %d bytes from address 0x%x", num_byte, raddr);
#endif
	/* timer */
	static auto start_time = std::chrono::high_resolution_clock::now();
	if (raddr == 0xa0000048) {
		auto current_time = std::chrono::high_resolution_clock::now();
		auto duration = std::chrono::duration_cast<std::chrono::microseconds>(current_time - start_time).count();
		uint64_t time_diff = static_cast<uint64_t>(duration);
		word_t data = static_cast<uint32_t>(time_diff & 0xffffffff);
		last_data = data;
		have_read = true;
#ifdef  CONFIG_MTRACE_READ
		printf(" = 0x%x\n", data);
#endif 
		return data;
	}
	if (raddr == 0xa000004c) {
		auto current_time = std::chrono::high_resolution_clock::now();
		auto duration = std::chrono::duration_cast<std::chrono::microseconds>(current_time - start_time).count();
		uint64_t time_diff = static_cast<uint64_t>(duration);
		word_t data = static_cast<uint32_t>(time_diff >> 32);
		last_data = data;
		have_read = true;
#ifdef  CONFIG_MTRACE_READ
		printf(" = 0x%x\n", data);
#endif 
		return data;
	}

	assert(num_byte <= 4 || num_byte > 0);
	word_t paddr = guest_to_host(raddr);

	word_t data = 0;
	for (int i = 0; i < num_byte; i++) {
		data |= rom[paddr + i] << 8 * i;
	}
	if (sext) {
  	int shift = (4 - num_byte) * 8;
  	data = (int32_t)(data << shift) >> shift;
	}
	last_data = data;
	have_read = true;
#ifdef CONFIG_MTRACE_READ
	printf(" = 0x%x\n", data);
#endif
	return data;
}

extern "C" void pmem_write(word_t waddr, word_t data, int num_byte) {
#ifdef CONFIG_MTRACE_WRITE
	printf("write 0x%x into memory 0x%x\n", data, waddr);
#endif
	/* serial */
	if (waddr == 0xa00003f8) { 
		putchar(data);
		return;
	}
	assert(num_byte <= 4 || num_byte > 0);
	word_t paddr = guest_to_host(waddr);
	for (int i = 0; i < num_byte; i++) {
		rom[paddr + i] = (data >> 8 * i) & 0xFF;
	}
}		
