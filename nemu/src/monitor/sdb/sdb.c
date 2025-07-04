/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"
#include <memory/vaddr.h>

static int is_batch_mode = false;

void init_regex();
void init_wp_pool();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
  nemu_state.state = NEMU_QUIT;
  return -1;
}

static int cmd_s(char *args) {
	int step_count = 1;
	if (args != NULL) 
		if (sscanf(args, "%d", &step_count) != 1) {
			printf("Usage: s [N]\n");
			return 0;
		}
	cpu_exec(step_count);
	return 0;
}

static int cmd_i(char *args) {
	if (args == NULL) {
		printf("Usage: \"i r\" to print register\n       \"i w\" to print watchpoint\n"); 
		return 0;
	}
	char *arg = strtok(args, " ");
	if (strcmp(arg, "r") == 0) {
		isa_reg_display();
	} else if (strcmp(arg, "w") == 0) {
		display_wp();
	} else printf("Usage: \"i r\" to print register\n       \"i w\" to print watchpoint\n"); 
	return 0;	
}

static int cmd_x(char *args) {
	if (args == NULL) {
		printf("Usage: x N address\n");
		return 0;
	}
	unsigned int step_count;
	uint32_t address;
	uint32_t data;
	if (sscanf(args, "%d %x", &step_count, &address) == 2) {
		for (int i = 0; i < step_count; i++) {
			data = vaddr_read(address + 4 * i, 4);
			printf("0x%08x:     ", address + 4 * i);
			printf("0x%08x\n", data);			
		}
	} else {
		printf("Usage: x N address\n");
	}
	return 0;
}

static int cmd_p(char *args) {
	if (args == NULL) {
		printf("Usage: p EXPR\n");
		return 0;
	}
	char first[16] = {0};
	int second;
	bool success = true;
	if (sscanf(args, "%s %d", first, &second) == 2) {
		if (strcmp(first, "test") == 0) {
			if (second >= 1000 || second <= 0) {
				printf("Number of test expressions should be between 1 and 999.\n");
				return 0;
			}
			printf("Testing...\n");
			expr_test(second, &success);
			return 0;
		}
	}
	uint32_t result = expr(args, &success);
	if (success)
		printf("%u\n", result);
	else
		printf("The expression is not valid!\n");
	return 0;
}

static int cmd_w(char *args) {
	bool success = true;
	new_wp(args, &success);
	if (!success) printf("The expression is not valid!\n");
	return 0;
}

static int cmd_d(char *args) {
	if (args == NULL) {
		printf("Usage: d all / d number\n");
		return 0;
	}
	if (strcmp(args, "all") == 0) {
		init_wp_pool();
		printf("Successfully delete all the watchpoints\n");
	} else {
		free_wp(atoi(args));
	}
	return 0;
}

static int cmd_help(char *args);

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
	{ "s", "Execute N steps instructions (default N = 1)", cmd_s },
	{ "i", "Print program status (register/watchpoint)", cmd_i },
	{ "x", "Scan memory and outputs consecutive N 4 bytes in hexadecimal", cmd_x },
	{ "p", "Evaluate expression", cmd_p },
	{ "w", "Set watchpoint", cmd_w },
	{ "d", "Delete a watchpoint", cmd_d },
};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
