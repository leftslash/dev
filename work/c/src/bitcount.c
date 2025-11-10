#include <stdio.h>

int atoi(char s[]) {
  int i, n;
  char c;
  for (i = n = 0; c = s[i]; i++)
    if (c >= '0' && c <= '9')
      n = n * 10 + c - '0';
  return n;
}

int bitcount(unsigned int x) {
  int n;
  for (n = 0; x > 0; ++n)
    x &= (x - 1);
  return n;
}

int main(int argc, char **argv) {
	if (argc < 2) return -1;
	printf("%d\n", bitcount(atoi(argv[1])));
	return 0;
}

/* vi: set ft=c cc=80: */
