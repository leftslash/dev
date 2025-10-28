#ifndef SWAP_H
#define SWAP_H

#include <string.h>

#define swap(t,a,b) do {             \
    t tmp;                           \
    memcpy(&tmp, &(a), sizeof((a))); \
    (a) = (b);                       \
    memcpy(&(b), &tmp, sizeof((b))); \
  } while(0)

#endif
