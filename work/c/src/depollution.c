#include <stdio.h>
#include <stdlib.h>

/* This illustrates how...
 */

/* Let the user pick whatevert they want to call it
 */

thing thing;
thing.init();
thing.data("hello, world");
thing.print();
thing.free();

#define _(x,y) ((x))->y((x))

struct thing_t {
  char *data;
  void (*print)(struct thing_t *);
  void (*free)(struct thing_t *);
};

typedef struct thing_t *thing;

static void print(thing t) {
  printf("%s\n", t->data);
}

static void free_(thing t) {
  free(t);
}

#define thing(x)  init((x))

static thing init(char *data) {
  thing t;

  t = malloc(sizeof(struct thing_t));
  if (!t) return NULL;
  t->data = data;
  t->print = print;
  t->free = free_;
  return t;
}

int main() {
  thing t;

  t = thing("hello, world");
  t->print(t);
  _(t,print);
  t->free(t);
  return 0;
}

