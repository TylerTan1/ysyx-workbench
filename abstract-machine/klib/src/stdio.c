#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
	va_list ap;
	va_start(ap, fmt);
	
	char *orig_out = out;
	while (*fmt) {
		if (*fmt == '%') {
			fmt++;
			switch (*fmt) {
				case 'd': case 'i':
					int num = va_arg(ap, int);
					char buffer[32];
					int len = 0;
					if (num < 0) {
						*out++ = '-';
					 	num = -num;
					}	
					do {
						buffer[len++] = '0' + num % 10;
						num /= 10;
					} while (num != 0);
					for (int i = len - 1; i >= 0; i--) 
						*out++ = buffer[i];
					break;
				case 's': 
					char *str = va_arg(ap, char *);
					while (*str != '\0') 
						*out++ = *str++;
					out++;
					break;
				default:
					panic("Not implement");
					break;
			}
			fmt++;
		} else 
			*out++ = *fmt++;
	}		
	*out = '\0';
	va_end(ap);
	return out - orig_out;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
