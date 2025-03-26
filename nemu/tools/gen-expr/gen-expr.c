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

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>
#include <stdint.h>

// this should be enough
static char buf[65536] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"#include <stdint.h>\n"
"int main() { "
"  uint32_t result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";

static void gen_num() {
	unsigned int num = rand() % 100 + 1;
	char num_str[16];
	snprintf(num_str, sizeof(num_str), "%d", num);
	strcat(buf, num_str);
}

static void gen_rand_op() {
	int op = rand() % 4;
	const char *ops[] = {"+", "-", "*", "/"};
	strcat(buf, ops[op]);
}

static void gen_space() { 
	if (rand() % 3 == 0) 
		strcat(buf, " ");
}

static void gen_rand_expr(int depth) {
	if (depth == 0) {
		gen_space();
		gen_num();
		return;
	}
	switch(rand() % 2) {
		case 1:	
			strcat(buf, "(");
			gen_space();
			gen_rand_expr(depth - 1); 
			gen_space();
			strcat(buf, ")"); 
			break;
		default:
			gen_rand_expr(depth - 1); 
			gen_space();
			gen_rand_op(); 
			if (buf[strlen(buf) - 1] == '/') {
				gen_num();
			} else {
				gen_rand_expr(depth - 1); 
			}
			break;
	}
}

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  for (int i = 0; i < loop; i ++) {
		memset(buf, '\0', sizeof(buf));
    gen_rand_expr(4);

    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -o /tmp/.expr");
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    uint32_t result;
    ret = fscanf(fp, "%d", &result);
    pclose(fp);

    printf("%u %s\n", result, buf);
  }
  return 0;
}
