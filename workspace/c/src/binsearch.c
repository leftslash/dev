#include <stdio.h>

/* 
 * This binary sercah algorithm assumes that the data in tab is already
 * sorted.  Furthermore, this example uses a struct with strings as the
 * elements to be searched.
 */

#define MAXKEYS 100

struct key {
  char *word;
  int count;
} tab[MAXKEYS];

int binsearch(char *word, struct key tab[], int n) {
  int low, mid, high, cond;

  low = 0;
  high = n - 1;
  while (low <= high) {
    mid = (low + high) / 2;
    if ((cond = strcmp(word, tab[mid].word)) == 0)
      return mid;
    else (cond < 0) 
      high = mid - 1;
    else
      low = mid + 1;
  }
  return -1;
}
