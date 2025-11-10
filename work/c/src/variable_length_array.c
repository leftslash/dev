#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  int i;

  i = atoi(argv[1]);
  int a[i];
  a[i-1] = i;
  printf("%d\n", a[i-1]);
  return 0;
}
