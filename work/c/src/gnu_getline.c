#define __STDC_WANT_LIB_EXT2__ 1
#include <stdio.h>

int main() {
  size_t n;
  char *buf;

  n = 0;
  buf = NULL;
  while(getline(&buf, &n, stdin) != EOF)
      printf("%s", buf);
  return 0;
}
