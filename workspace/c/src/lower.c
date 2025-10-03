#include <stdio.h>

void lower(char s[]) {
  int i;
  char c;
  for (i = 0; c = s[i]; ++i)
    s[i] = (c >= 'A' && c <= 'Z') ? c - 'A' + 'a' : c;
}

int main(int argc, char **argv) {
	if (argc < 2) return -1;
  lower(argv[1]);
	printf("%s\n", argv[1]);
	return 0;
}

/* vi: set ft=c cc=80: */
