#include <stdio.h>

/* demonstrates how to get around const requirements */

struct s {
  int i;
};

void addone(struct s *s) {
  s->i++;
}

int increment(const struct s *s) {
  addone( (struct s*) s );
  return s->i;
}

int main() {
  struct s s;

  s.i = 42;
  printf("%d\n", s.i);
  printf("%d\n", increment(&s));
  printf("%d\n", s.i);

  return 0;
}


