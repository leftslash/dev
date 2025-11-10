#include <stdio.h>

int main() {

  char a[] = "hello";
  *a = 'H';
  printf("%s\n", a);

  char *s = "world";
  *s = 'W';
  printf("%s\n", s);
  return 0;
}
