#include <stdio.h>

/* Homegrown version of getline but returns number of
 * characters or an error.  This is very much incomplete 
 * and needs more consideration and work.
 */

int fgetline(FILE *f, char *buf, int n) {
  int i, c;

  if (!f || !buf || n < 2)
    return -1;
  for (i = 0; i <= n && (c = getc(f)) != EOF && c != '\n'; ++i)
    *buf++ = c;
  *buf = '\0';
  if (c == EOF)
    return -2;
  if (i >= n)
    return -3;
  return i;
}

#define MAX 64

int main() {
  int n;
  char s[MAX];

  while ((n = fgetline(stdin,s,MAX)) >= 0)
    printf("%3d: %s\n", n, s);
  return n;
}
