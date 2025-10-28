#ifndef DEBUG_H
#define DEBUG_H

/* Example of  debug facility demonstrating the use of
 * macros and preproceesor definitions
 */

#include <stdio.h>
#include <stdarg.h>

void debug_prefix(const char *file, int line) {
  fprintf(stderr, "DEBUG: %s:%d ", file, line);
}

void debug_print(const char *fmt, ...) {
  va_list args;
  va_start(args, fmt);
  vfprintf(stderr, fmt, args);
  va_end(args);
}

#define debug(x) do {               \
  debug_prefix(__FILE__, __LINE__); \
  debug_print x;                    \
} while (0)

#endif

/* vi: set cc=80 nu: */
