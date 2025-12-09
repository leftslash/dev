#include <stdio.h>

typedef struct {
  enum {
    UNKNOWN,
    STOPPED,
    STARTED
  } status;
} status_t;

int main() {
  status_t s;
  s.status = BUFSIZ;
  printf("%d\n", s.status);
  return 0;
}

