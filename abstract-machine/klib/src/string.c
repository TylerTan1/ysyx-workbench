#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
size_t strlen(const char *s) {
	assert(s != NULL);
	size_t cnt = 0;
	while (*(s + cnt) != '\0') 
		cnt++;
	return cnt;
}

char *strcpy(char *dst, const char *src) {
	int tmp = 0;
  while (*(src + tmp) != '\0') {
		*(dst + tmp) = *(src + tmp);
		tmp++;
	}
	*(dst + tmp) = '\0'; 
	return dst;
}

char *strncpy(char *dst, const char *src, size_t n) {
  panic("Not implemented");
}

char *strcat(char *dst, const char *src) {
	strcpy(dst + strlen(dst), src);
 return dst;	
}

int strcmp(const char *s1, const char *s2) {
	int tmp = 0;
	while (*(s1 + tmp) != '\0') {	
		if (*(s1 + tmp) != *(s2 + tmp)) 
				return *(s1 + tmp) - *(s2 + tmp);
		tmp++;
	}
	return *(s1 + tmp) - *(s2 + tmp);
}

int strncmp(const char *s1, const char *s2, size_t n) {
	int tmp = 0;
	while (*(s1 + tmp) != '\0' && tmp < n) {
		if (*(s1 + tmp) != *(s2 + tmp)) 
				return *(s1 + tmp) - *(s2 + tmp);
		tmp++;
	}
	if (tmp == n) return 0;
	else return *(s1 + tmp) - *(s2 + tmp);
}

void *memset(void *s, int c, size_t n) {
	char *s_char = (char *)s;
	unsigned char byte = (unsigned char)c;
	for (int i = 0; i < n; i++) 
		s_char[i] = byte;
	return s;
}

void *memmove(void *dst, const void *src, size_t n) {
  panic("Not implemented");
}

void *memcpy(void *out, const void *in, size_t n) {
	char *out_char = (char *)out;
	char *in_char = (char *)in;
	for (int i = 0; i < n; i++) 
		*(out_char + i) = *(in_char + i);
	return out;
}

int memcmp(const void *s1, const void *s2, size_t n) {
	char *s1_char = (char *)s1;
	char *s2_char = (char *)s2;
	for (int i = 0; i < n; i++)
		if (*(s1_char + i) != *(s2_char + i))
			return *(s1_char + i) - *(s2_char + i);
	return 0;
} 

#endif
