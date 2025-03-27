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

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

enum {
  TK_NOTYPE = 256, TK_NUM,
	TK_EQ = 20,
	TK_PLUS = 21, TK_MINUS = 22,
	TK_MULTIPLY = 23, TK_SLASH = 24,
	TK_LPAREN = 42, TK_RPAREN = 41,
  /* TODO: Add more token types */
	TK_DEFER = 10
};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */
  {" +", TK_NOTYPE},    // spaces
	{"[0-9]+(\\.[0-9]+)?", TK_NUM},  //number
  {"==", TK_EQ},        // equal
  {"\\+", TK_PLUS},         // plus
	{"-", TK_MINUS},					// minus
	{"\\*", TK_MULTIPLY},			// multiply
	{"/", TK_SLASH}, 					// slash
	{"\\(", TK_LPAREN},				// left parenthesis
	{"\\)", TK_RPAREN}				// right parenthesis
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};  //储存编译后的正则表达式

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);    //储存正则表达式至re[]
    if (ret != 0) {             //若正则表达式编译错误
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;  //指示当前位置
  int i;
  regmatch_t pmatch;  //用于储存匹配结果

  nr_token = 0;

	for (int j = 0; j < 32; j++) {
		tokens[j].type = 0;
		memset(tokens[j].str, 0, 32);
	}

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {   // 成功识别并储存到pmatch里且是当前指向的位置
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;     

         // Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
         //   i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */
        switch (rules[i].token_type) {
					case TK_EQ: case TK_PLUS: case TK_MINUS:  
					case TK_SLASH: case TK_LPAREN: case TK_RPAREN:
						tokens[nr_token].type = rules[i].token_type;
						nr_token++;
					 	break;
					case TK_MULTIPLY:
						if (nr_token == 0 || (tokens[nr_token - 1].type != TK_NUM && tokens[nr_token - 1].type != TK_RPAREN))
							tokens[nr_token].type = TK_DEFER;
						else
							tokens[nr_token].type = TK_MULTIPLY;
						nr_token++;
						break; 
					case TK_NUM:
						tokens[nr_token].type = rules[i].token_type;
						if (substr_len > 32) {
							printf("Exceed 32-bit width\n");
							return false;
						}
						strncpy(tokens[nr_token].str, substr_start, substr_len);
						nr_token++;
						break;
					case TK_NOTYPE:
						break;
          default:
						assert(0);
						break;
        }
				break;
      }
    }
    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }
  return true;
}

static bool check_parentheses(int p, int q, bool *success) {
	int count_paren = 0;
	if (tokens[p].type == TK_LPAREN && tokens[q].type == TK_RPAREN) {
		for (int i = p + 1; i < q; i++) {
			if (tokens[i].type == TK_LPAREN)
				count_paren++;
			else if (tokens[i].type == TK_RPAREN)
				count_paren--;
			if (count_paren < 0) {
				success = false;
				return false;
			}
		}
		if (count_paren != 0) {
			success = false;
			return false;
		}
		return true;
	} else 
	return false;
}

static int prio(int op) {
	switch (op) {
		case TK_PLUS: case TK_MINUS:
			return 0;
		case TK_MULTIPLY: case TK_SLASH:
			return 1;
		case TK_DEFER:
			return 2;
		default: 
			assert(0);
	}
}

static int find_mainop(int p, int q, bool *success) {
	int count_paren = 0;
	int mainop_position = 0;
	int mainop_prio = 0;
	for (int i = p; i <= q; i++) {
		if (tokens[i].type == TK_LPAREN)
			count_paren++;
		else if (tokens[i].type == TK_RPAREN)
			count_paren--;
		if (count_paren > 0)
			continue;
		for (int j = 3; j <= 6; j++) {
			if (rules[j].token_type == tokens[i].type) {
				if (mainop_prio == 0 || prio(rules[j].token_type) <= prio(rules[mainop_prio].token_type)) { 
					mainop_position = i;
					mainop_prio = j;
				}
				break;
			}
		}
	}
	if (!mainop_position && !mainop_prio)
		success = false;
	return mainop_position;
}

static uint32_t eval(int p, int q, bool *success) {
	uint32_t result;
	if (p > q)
		assert(0);
	else if (p == q) {
		if (sscanf(tokens[p].str, "%u", &result) == 1)
			return result;
		else {
			printf("Invalid expression!\n");
			*success = false;
			return 0;
		}
	} else if (check_parentheses(p, q, success))
			return eval(p + 1, q - 1, success);
	else if (!success)
			return 0;
	else {
			int op = find_mainop(p, q, success);   //这里错误判断可能可以优化
			if (!success) {
				printf("Invalid expression!\n");
				return 0;
			}
			if (tokens[op].type > 19 && tokens[op].type < 30) {
				uint32_t val1 = eval(p, op - 1, success);
				if (!success) {
					printf("Invalid expression!\n");
					return 0;
				}
				uint32_t val2 = eval(op + 1, q, success);
				if (!success) {
					printf("Invalid expression!\n");
					return 0;
				}
				switch (tokens[op].type) {
					case TK_PLUS:     return val1 + val2;
					case TK_MINUS:    return val1 - val2;
					case TK_MULTIPLY: return val1 * val2;
					case TK_SLASH:		return val1 / val2;
					default:					assert(0);
				}
			} else if (tokens[op].type > 9 && tokens[op].type < 20) {
				uintptr_t val = (uintptr_t)eval(op + 1, q, success);
				if (!success) {
					printf("Invalid expression!\n");
					return 0;
				}
				switch (tokens[op].type) {
					case TK_DEFER:   
						if (val >= 0x80000000 && val < 0x8fffffff)
							return  *(uint32_t *)val;
						else {
							printf("Cannot access the address\n");
							success = false;
							return 0;
						}
					default:	assert(0);
				}
			} else 
				assert(0);
	}
}

uint32_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  /* TODO: Insert codes to evaluate the expression. */
	return eval(0, nr_token - 1, success);
}

void expr_test(int expr_count, bool *success) {
	FILE *fp = fopen("/home/tylertan/ysyx-workbench/nemu/tools/gen-expr/input.txt", "r");
	assert(fp != NULL);
	char buffer[128+16];
	uint32_t origin_result;
	char expression[128];
	uint32_t result;
	int count_success = 0;
	
	for (int i = 0; i < expr_count; i++) { 
		memset(buffer, '\0', sizeof(buffer));
		memset(expression, '\0', sizeof(expression));

		assert(fgets(buffer, sizeof(buffer), fp) != NULL);
		if (sscanf(buffer, "%u %[^\n]", &origin_result, expression) != 2) {
			printf("Failed to parse line\n");
			assert(0);
		}
		result = expr(expression, success);
		if (!success) {
			printf("Something wrong during calculating\n");
			assert(0);
		}
		if (origin_result == result) {
			printf("Succeed in %s = %u\n", expression, result);
			count_success++;
		} else {
			printf("FAILED IN %s = %u\n", expression, result);
		}
	}
	fclose(fp);
	printf("Total tests: %d\nSuccess tests: %d\n", expr_count, count_success);
}
