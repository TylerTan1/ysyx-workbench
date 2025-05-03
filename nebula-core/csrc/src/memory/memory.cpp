#include <memory.h>

#include <fstream>

/* initialize memory and load img */
size_t memory::init_rom(SimulationContext& ctx) {
	/* default instructions */
	std::vector<word_t> insts = {
		0x00200093, // addi x1, x0, 2
		0x00408093, // addi x1, x1, 4
		0x00108213, // addi x4, x1, 4
		0x00100073	// ebreak
	};

	if (ctx.img_file.empty()) {			
		/* load default instructions */
		std::cout << "Loading default instructions..." << std::endl;
		ctx.rom = insts;
		return 16;
	}

	/* open image file */
	std::ifstream file (ctx.img_file, std::ios::binary);
	std::cout <<"Loading instructions from " << ctx.img_file << std::endl;
	if (!file) throw std::runtime_error("Failed to open file: " + ctx.img_file);
    
	/* record the size of the file */
	file.seekg(0, std::ios::end);
	const size_t file_size = file.tellg();
	file.seekg(0, std::ios::beg);			 

	std::cout << "Initializing memory from 0x80000000 to 0x" 
						<< std::hex << 0x80000000 + file_size / 8 << std::endl;
	/* define rom based on the size of the file */	
	ctx.rom.resize(file_size / sizeof(word_t));

	/* load the img file */
	file.read(reinterpret_cast<char*>(ctx.rom.data()), file_size);
	if (!file) throw std::runtime_error("Failed to read file: " + ctx.img_file);
	return file_size;
}

/* return virtual address */
static word_t guest_to_host(word_t address) {
	return (address < 0x80000000) ? 0 : address - 0x80000000;
}

/* set inst based on pc */
word_t memory::read(word_t address, SimulationContext& ctx) {
	word_t paddr = guest_to_host(address);
	return  ctx.rom.at(paddr / 4);
}
