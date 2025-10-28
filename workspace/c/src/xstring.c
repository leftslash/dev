#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* This illustrates how...
 */

#define string(x) str_init((x))

typedef char * string;

struct str_t {
  int  len;
  char buf;
};

string str_init(char *s) {
  size_t n;
  struct str_t *t;

  n = strlen(s);
  t = malloc(sizeof(struct str_t)+n);
  t->len = n;
  strcpy(&t->buf, s);
  return (string) &t->buf;
}

size_t str_len(string s) {
  return (int)*(s-4);
}

void str_free(string s) {
  free(s-4);
}

int main() {
  string s;
  s = str_init("hello, world");
  printf("%ld\n", str_len(s));
  str_free(s);
  return 0;
}
