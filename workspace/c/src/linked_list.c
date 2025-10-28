#include <stdio.h>
#include <stdlib.h>

/* This illustrates how...
 */

typedef struct item_s {
  void *data;
  struct item_s *next;
} item_t;

typedef struct list_s {
  item_t *head;
  size_t length;
} list_t;

list_t* list_new() {
  list_t *list;

  list = malloc(sizeof(list_t));
  if (!list) return NULL;
  list->head = NULL;
  list->length = 0;
  return list;
}

int list_insert(list_t *list, void *data) {
  item_t *item;

  if (!list) return 1;
  item = malloc(sizeof(item_t));
  if (!item) return 1;
  item->data = data;
  item->next = list->head;
  list->head = item;
  ++list->length;
  return 0;
}

void list_destroy(list_t *list) {
  item_t *item, *next;

  if (!list) return;
  for (item = list->head; item; item = next) {
    next = item->next;
    free(item);
  }
  free(list);
}

int list_traverse(list_t *list, int (*f)(void *)) {
  int r;
  item_t *item;

  if (!list) return 1;
  r = 0;
  for (item = list->head; item; item = item->next)
    if ((r = f(item->data))) break;
  return r;
}

int visit(void *data) {
  puts((char *) data);
  return 0;
}

int main(int argc, char **argv) {
  list_t *list;

  list = list_new();
  list_insert(list, "hello");
  list_insert(list, "world");
  list_traverse(list, visit);
  list_destroy(list);
  return 0;
}

