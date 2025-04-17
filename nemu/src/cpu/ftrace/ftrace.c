#include <common.h>
#include <elf.h>

typedef struct {
	char name[20];
	word_t addr;
	unsigned char info;
	word_t size;
} Symbol_table;

Symbol_table **symbol_tables;
int symbol_tables_size;
int indent = 0;

void init_ftrace(char *elf_file) {
	printf("Initializing ftrace: %s\n", elf_file);
	assert(elf_file != NULL);
	FILE *fp = fopen(elf_file, "rb");		// read binary
	assert(fp != NULL);

	Elf32_Ehdr elf_header;		// ELF header
	if (fread(&elf_header, sizeof(Elf32_Ehdr), 1, fp) <= 0) {
		fclose(fp);
		assert(0);
	}

	fseek(fp, elf_header.e_shoff, SEEK_SET);		// section header
	Elf32_Shdr strtab_header;
	while (1) {				// look for string table
		if (fread(&strtab_header, sizeof(Elf32_Shdr), 1, fp) <= 0) {
			fclose(fp);
			assert(0);
		}
		if (strtab_header.sh_type == SHT_STRTAB) break;
	}
	char *string_table = malloc(strtab_header.sh_size);
	assert(string_table != NULL);
	fseek(fp, strtab_header.sh_offset, SEEK_SET);		// string table
	if (fread(string_table, strtab_header.sh_size, 1, fp) <= 0) {
		fclose(fp);
		assert(0);
	}				// store string table
	Elf32_Shdr symtab_header;
	fseek(fp, elf_header.e_shoff, SEEK_SET);
	while (1) {			// look for symbol table
		if (fread(&symtab_header, sizeof(Elf32_Shdr), 1, fp) <= 0) {
			fclose(fp);
			assert(0);
		}
		if (symtab_header.sh_type == SHT_SYMTAB) break;
	}
	fseek(fp, symtab_header.sh_offset, SEEK_SET);
	Elf32_Sym symbol;
	int num_symbols = symtab_header.sh_size / symtab_header.sh_entsize;	
	int size = 0;
	symbol_tables = malloc(num_symbols * sizeof(Symbol_table*));
	assert(symbol_tables != NULL);
	for (int i = 0; i < num_symbols; i++) {
		if (fread(&symbol, sizeof(Elf32_Sym), 1, fp) <= 0) {
			fclose(fp);
			assert(0);
		}
		// estimate if the symbol is a func
		if (ELF32_ST_TYPE(symbol.st_info) == STT_FUNC && symbol.st_size != 0) {
			symbol_tables[size] = malloc(sizeof(Symbol_table));
			assert(symbol_tables[size] != NULL);
			const char *name = string_table + symbol.st_name;		// get symbol name from string table
			strncpy(symbol_tables[size]->name, name, sizeof(symbol_tables[i]->name) - 1);
			symbol_tables[size]->name[sizeof(symbol_tables[size]->name) - 1] = '\0';
			symbol_tables[size]->addr = symbol.st_value;	// store info in symbol_table
			symbol_tables[size]->info = symbol.st_info;
			symbol_tables[size]->size = symbol.st_size;	
			size++;
		}
		symbol_tables_size = size;
	}
	printf("Successfully record %d functions\n", size);
	printf("Stored Symbol_table entries:\n");
	for (int i = 0; i < size; i++) {
  	printf("  [%d] Name: %-20s Addr: 0x%08x Info: 0x%02x Size: %u\n", i, symbol_tables[i]->name, symbol_tables[i]->addr, symbol_tables[i]->info, symbol_tables[i]->size);
	}	
	fclose(fp);
	free(string_table);
}

void print_call(word_t pc, word_t dnpc) {
    for (int i = 0; i < symbol_tables_size; i++) {
        Symbol_table *symbol = symbol_tables[i];
        word_t start_addr = symbol->addr;
        word_t end_addr = symbol->addr + symbol->size;

        if (dnpc >= start_addr && dnpc < end_addr) {
            printf(FMT_PADDR, pc); 
            printf(": ");
            for (int j = 0; j < indent; j++) {
                printf(" ");
            }
            printf("call [%s@", symbol->name);
						printf(FMT_PADDR, dnpc);
						printf("]\n");
            indent += 2;
            return;
        }
    }
    printf("Calling an unknown function\n");
}

void print_ret(word_t pc) {
  for (int i = 0; i < symbol_tables_size; i++) {
    Symbol_table *symbol = symbol_tables[i];
    word_t start_addr = symbol->addr;
    word_t end_addr = symbol->addr + symbol->size;
    if (pc >= start_addr && pc < end_addr) {
			indent -= 2;
      printf(FMT_PADDR, pc);
			printf(": ");
			for (int j = 0; j < indent; j++)
				printf(" ");
			printf("ret  [%s]\n", symbol->name);
      return;
    }
  }
  printf("Returning from an unknown function\n");
}

void free_ftrace() {
	for (int i = 0; i <  symbol_tables_size; i++)
		free(symbol_tables[i]);
	free(symbol_tables);
	printf("Successfully free ftrace\n");
}
