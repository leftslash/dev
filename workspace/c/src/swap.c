#include "swap.h"
#include <stdio.h>

int main() {
  char *a = "hello";
  char *b = "world";
  swap(a, b);
  printf("a: %s, b: %s\n", a, b);
  return 0;
}

/* vi: set cc=80: */
