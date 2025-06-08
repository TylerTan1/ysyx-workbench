#ifndef KLIB_MACROS_H__
#define KLIB_MACROS_H__

/* T: Put it simply, klib provides self-defined C standard lilbrary and io_read/write function to handle device */
#define ROUNDUP(a, sz)      ((((uintptr_t)a) + (sz) - 1) & ~((sz) - 1))
#define ROUNDDOWN(a, sz)    ((((uintptr_t)a)) & ~((sz) - 1))
#define LENGTH(arr)         (sizeof(arr) / sizeof((arr)[0]))											// T: get the length of an array
#define RANGE(st, ed)       (Area) { .start = (void *)(st), .end = (void *)(ed) } // T: initialize range
#define IN_RANGE(ptr, area) ((area).start <= (ptr) && (ptr) < (area).end)					// T: examine whether ptr is in range 

#define STRINGIFY(s)        #s							// T: transfer s to string format, like STRINGIFY(hello) = "hello"
#define TOSTRING(s)         STRINGIFY(s)
#define _CONCAT(x, y)       x ## y
#define CONCAT(x, y)        _CONCAT(x, y)

#define putstr(s) \
  ({ for (const char *p = s; *p; p++) putch(*p); })

/* T: io_read() calls ioe_read() function */
#define io_read(reg) \
  ({ reg##_T __io_param; \
    ioe_read(reg, &__io_param); \
    __io_param; })

/* T: io_write() calls ioe_read() function */
#define io_write(reg, ...) \
  ({ reg##_T __io_param = (reg##_T) { __VA_ARGS__ }; \
    ioe_write(reg, &__io_param); })

#define static_assert(const_cond) \
  static char CONCAT(_static_assert_, __LINE__) [(const_cond) ? 1 : -1] __attribute__((unused))

#define panic_on(cond, s) \
  ({ if (cond) { \
      putstr("AM Panic: "); putstr(s); \
      putstr(" @ " __FILE__ ":" TOSTRING(__LINE__) "  \n"); \
      halt(1); \
    } })

#define panic(s) panic_on(1, s)

#endif
