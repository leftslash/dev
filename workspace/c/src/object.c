#include <stdio.h>
#include <stdlib.h>

typedef struct Object {
  int value;
  void (*print)(struct Object *);
  void (*free)(struct Object *);
} Object;

static void print_(Object *object) {
  printf("Object{value=%d}\n", object->value);
}

static void free_(Object *object) {
  free(object);
}

Object *new_object(int value) {
  Object *object;

  object = (Object *) malloc(sizeof(Object));
  if (!object) return NULL;
  object->value = value;
  object->print = print_;
  object->free = free_;
  return object;
}

int main() {
  Object *object;

  object = new_object(42);
  object->print(object);
  object->free(object);
  return 0;
}
