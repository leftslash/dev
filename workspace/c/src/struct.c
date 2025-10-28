#include <stdio.h>
#include <string.h>

struct thing {
  int widget;
  char name[10];
};

struct thing new_thing() {
  struct thing thing;

  thing.widget = 42;
  strcpy(thing.name,"hello");
  return thing;
}

int main() {
  struct thing thing;

  thing = new_thing();
  printf("%s\n", thing.name);
  return 0;
}
