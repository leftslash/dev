#include <stdio.h>
#include <stdlib.h>

/* This illustrates how...
 */

int factorial(int n) {
  if (n < 0)
    return 0;
  if (n == 0 || n == 1)
    return 1;
  return n * factorial(n-1);
}

int main(int argc, char **argv) {
  int n;
  char *end;

  if (argc != 2)
    return 1;
  n = strtod(argv[1], &end);
  printf("%d! is %d\n", n, factorial(n));
  return 0;
}

