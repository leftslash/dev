#ifndef SWAP_H
#define SWAP_H

#include <string.h>

#define swap(a,b) do {                  \
    union {                             \
      char buf[sizeof((a))];            \
      long double aligner;              \
    } tmp;                              \
    memcpy(tmp.buf, &(a), sizeof((a))); \
    (a) = (b);                          \
    memcpy(&(b), tmp.buf, sizeof((b))); \
  } while(0)

#endif
