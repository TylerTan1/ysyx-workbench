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
	TK_EQ,
	TK_PLUS = 43, TK_MINUS = 45,
	TK_MULTIPLY = 42, TK_SLASH = 47,
	TK_LPAREN = 40, TK_RPAREN = 41	
  /* TODO: Add more token types */

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
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {   // 成功识别并储存到pmatch里且是当前指向的位置
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;     

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */
        switch (rules[i].token_type) {
					case TK_EQ: case TK_PLUS: case TK_MINUS: case TK_MULTIPLY: 
					case TK_SLASH: case TK_LPAREN: case TK_RPAREN:
						tokens[nr_token].type = rules[i].token_type;
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

	for (int k = 0; k < nr_token; k++) {
		if (tokens[k].type == TK_NUM)
			Log("%s", tokens[k].str);
		else 
			Log("%c", tokens[k].type); 
	}
  return true;
}

uint32_t eval(int p, int q, bool *success) {
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
			
	} else {
		return 0;
	}
}

word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  /* TODO: Insert codes to evaluate the expression. */
	return eval(0, nr_token - 1, success);
}
