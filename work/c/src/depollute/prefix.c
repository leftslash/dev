#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prefix.h"

static char *s;

void long_ugly_name_init() {
  s = malloc(256);
  strcpy(s, "hello, world");
}

void long_ugly_name_print() {
  printf("%s\n", s);
}

void long_ugly_name_free() {
  free(s);
}
