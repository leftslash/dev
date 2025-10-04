#include <stdio.h>

int getline(char buf[], int max) {
  int c, i;

  i = 0;
  while (--max > 0 && (c = getchar()) != EOF && c != '\n')
    buf[i++] = c;
  if (c == '\n')
    buf[i++] = c;
  buf[i] = '\0';
  return i;
}

int strindex(char s[], char t[]) {
  int i, j, k;
  for (i = 0; s[i]; ++i) {
    for (j = i, k = 0; t[k] && s[j] == t[k]; ++j, ++k) ;
    if (k > 0 && !t[k])
      return i;
  }
  return -1;
}
