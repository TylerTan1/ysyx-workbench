#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int vsprintf(char *out, const char *fmt, va_list ap) {
	char *orig_out = out;
	while (*fmt) {
		if (*fmt == '%') {
			fmt++;

      char pad_char = ' ';
      int width = 0;

      if (*fmt == '0') {
        pad_char = '0';
        fmt++;
      }

      while (*fmt >= '0' && *fmt <= '9') {
        width = width * 10 + (*fmt - '0');
        fmt++;
      }

			switch (*fmt) {
				case 'd': case 'i':
					int num = va_arg(ap, int);
					if (num < 0) {
						*out++ = '-';
					 	num = (unsigned int)(-(long)num);
						width--;
					}

					char buffer[32];
					int len = 0;
					do {
						buffer[len++] = '0' + num % 10;
						num /= 10;
					} while (num != 0);

					for (int i = len; i < width; i++) 
						*out++ = pad_char;

					for (int i = len - 1; i >= 0; i--) 
						*out++ = buffer[i];
					break;

				case 's': 
					char *str = va_arg(ap, char *);
					while (*str != '\0') 
						*out++ = *str++;
					break;

				case 'c':
					int c = va_arg(ap, int);
					*out++ = (char)c;
					break;

				case '%':
					*out++ = '%';
          break;

				default:
					panic("Not implemented");
					break;
			}
			fmt++;
		} else { 
			*out++ = *fmt++;
		}
	}		
	*out = '\0';
	return out - orig_out;
}

int printf(const char *fmt, ...) {
	va_list ap;
	va_start(ap, fmt);
	
	/* allocate a big enough buffer */
	char *buffer = malloc(1024);
	assert(buffer != NULL);
	int num_char = vsprintf(buffer, fmt, ap);
	assert(num_char >= 0);

	for (int i = 0; i < num_char; i++) {
		putch(buffer[i]);
	}
	free(buffer);
	return num_char;
}

int sprintf(char *out, const char *fmt, ...) {
	va_list ap;
	va_start(ap, fmt);
	int n = vsprintf(out, fmt, ap);
	va_end(ap);
	return n;	
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
