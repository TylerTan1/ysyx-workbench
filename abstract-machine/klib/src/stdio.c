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

			// 如%08x这样的格式，那么pad_char = '0'，width = 8 
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
			
			bool is_long = false;
			if (*fmt == 'l') {
				is_long = true;
				fmt++;
			}

			switch (*fmt) {
				case 'd': case 'i':
					long d;
					if (is_long) {
						d = va_arg(ap, long);
					} else {
						d = va_arg(ap, int);
					}
					if (d < 0) {
						*out++ = '-';
					 	d = (unsigned long int)(-(long)d);
						width--;
					}

					char dbuffer[32];
					int dlen = 0;
					do {
						dbuffer[dlen++] = '0' + d % 10;
						d /= 10;
					} while (d != 0);

					for (int i = dlen; i < width; i++) 
						*out++ = pad_char;

					for (int i = dlen - 1; i >= 0; i--) 
						*out++ = dbuffer[i];
					break;

				case 'u':
					unsigned long int u;
					if (is_long) {
						u = va_arg(ap, unsigned long int);
					} else {
						u = va_arg(ap, unsigned int);
					}

					char ubuffer[32];
					int ulen = 0;
					do {
						ubuffer[ulen++] = '0' + u % 10;
						u /= 10;
					} while (u != 0);

					for (int i = ulen; i < width; i++) 
						*out++ = pad_char;

					for (int i = ulen - 1; i >= 0; i--) 
						*out++ = ubuffer[i];
					break;

				case 'x':
					unsigned long int x;
					if (is_long) {
						x = va_arg(ap, unsigned long int);
					} else {
						x = va_arg(ap, unsigned int);
					}
					char xbuffer[32];
					int xlen = 0;

					const char *hex_digits = "0123456789abcdef";
					do {
						xbuffer[xlen++] = hex_digits[x % 16];
						x /= 16;
					} while (x != 0);

					for (int i = xlen; i < width; i++) {
						*out++ = pad_char;
					}

					for (int i = xlen - 1; i < width; i++) {
						*out++ = xbuffer[i];
					}
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
					putch('%');
					putch(*fmt);
					panic(" sprintf not implemented");
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
	
	char buffer[128];
	assert(buffer != NULL);
	int num_char = vsprintf(buffer, fmt, ap);
	assert(num_char >= 0);

	for (int i = 0; i < num_char; i++) {
		putch(buffer[i]);
	}
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
