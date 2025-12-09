#include <stdio.h>

int main() {
  short n = 32767;
  unsigned short m = 65535;

  printf("%d\n", ++n);
  printf("%d\n", ++m);

  return 0;
}
