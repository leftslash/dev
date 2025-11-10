#include <stdio.h>

int htoi(char s[]) {
	int i, n;
	char c;

	n = i = 0;
	while (c = s[i++])
		if (c >= '0' && c <= '9')
			n = n * 16 + c - '0';
		else if (c >= 'a' && c <= 'f')
			n = n * 16 + c - 'a' + 10;
		else if (c >= 'A' && c <= 'F')
			n = n * 16 + c - 'A' + 10;

	return n;
}

int main(int argc, char **argv) {
	if (argc < 2) return -1;
	printf("%d\n", htoi(argv[1]));
	return 0;
}

/* vi: set ft=c: */
