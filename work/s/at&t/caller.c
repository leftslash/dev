#include <stdio.h>

void asmFunc(void);

int main() {
  printf("calling asm\n");
  asmFunc();
  printf("after asm\n");
  return 0;
}
