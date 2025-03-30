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

#include "sdb.h"

#define NR_WP 32

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;
	char expression[128];
	uint32_t value;
  /* TODO: Add more members if necessary */
	
} WP;

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
		memset(wp_pool[i].expression, '\0', sizeof(wp_pool[i].expression));
		wp_pool[i].value = 0;
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */

void new_wp(char *args, bool* success) {
	if (args == NULL) assert(0);
	uint32_t new_value = expr(args, success);
	if (free_ != NULL && *success) {
		if (head == NULL) { 
			head = free_;
			free_ = head->next;
			head->next = NULL;
		} else {
			int tmp = head->NO;
			head = free_;
			free_ = head->next;
			head->next = &wp_pool[tmp];
		}
		strcpy(head->expression, args);
		head->value = new_value;
		printf("Watchpoint %d: %s\n", head->NO, args);
		return;
	}
	if (free_ == NULL) printf("Too many watchpoints\n");
}

void free_wp(int no) {
	WP* wp = head;				// point at the watchpoint to be deleted
	if (wp->NO == no) {
		memset(wp->expression, '\0', sizeof(wp->expression));
		wp->value = 0;
		head = head->next;
		wp->next = free_;
		free_ = wp;
		printf("Successfully delete watchpoint %d\n", no);
		return;
	}
	wp = head->next;
	WP* tmp_ptr = head;				// point at the latter watchpoint of the to be deleted
	while (wp->NO != no) {
		if (wp->next == NULL) {
			printf("No such watchpoint!\n");
			return;
		}
		wp = wp->next;
		tmp_ptr = tmp_ptr->next;
	}
	memset(wp->expression, '\0', sizeof(wp->expression));
	wp->value = 0;
	tmp_ptr->next = wp->next;
	wp->next = free_;
	free_ = wp;
	printf("Successfully delete watchpoint %d\n", no);
}

void display_wp() {
	WP* wp = head;
	if (wp == NULL) {
		printf("There is no watchpoint\n");
		return;
	}
	printf("NUM     EXPRESSION                             VALUE\n");
	while (wp != NULL) {
		printf("%-7d %-38s %u\n", wp->NO, wp->expression, wp->value);
		wp = wp->next;
	}
}

bool watchpoint_test() {
	if (head == NULL) return true;
	bool success = true;
	uint32_t new_value;
	bool is_equal = true;
	WP* wp = head;
	while (wp != NULL) {
		new_value = expr(wp->expression, &success);
		if (!success) assert(0);
		if (new_value == wp->value) {
			wp = wp->next;	
			continue;
		}
		printf("Watchpoint %d: %s\n", wp->NO, wp->expression);
		printf("Old value: %u\n", wp->value);
		printf("New value: %u\n", new_value);
		wp->value = new_value;
		is_equal = false;
		wp = wp->next;
	}
	return is_equal;
}
