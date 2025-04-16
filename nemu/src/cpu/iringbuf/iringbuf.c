#include <common.h>

typedef struct { 
	char buffer[20][128];
	int position;
	bool is_full;
} iringbuffer;

iringbuffer *bf = NULL;

void init_iringbuf() {
	bf = calloc(1, sizeof(iringbuffer));
	assert(bf != NULL);
	Log("Initializing iringbuf");
}

void write_iringbuf(char *logbuf) {
	snprintf(bf->buffer[bf->position], 128, "%s", logbuf);
	bf->position++;
	if (bf->position == 20) {
		bf->position = 0;
		bf->is_full = true;
	}
}

void print_iringbuf() {
	printf("Printing iringbuffer...\n");
	if (bf->is_full) 
		for (int i = 1; i <= 20; i++) 
			printf("%s\n", bf->buffer[(bf->position + i > 19) ? bf->position +i - 20 : bf->position + i]);	
	else 
		for (int i = 0; i < bf->position; i++) 
			printf("%s\n", bf->buffer[i]);

	free(bf);
}

