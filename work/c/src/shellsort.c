#include "swap.h"
#include <stdio.h>

void sort(int v[], int n) {
  int gap, i, j;
  for (gap = n / 2; gap > 0; gap /= 2)
    for (i = gap; i < n; ++i)
      for (j = i - gap; j >= 0 && v[j] > v[j + gap]; j -= gap)
        swap(v[j], v[j + gap]);
}

int main(int argc, char **argv) {
  int i, n, v[] = {9, 8, 7, 6, 4, 3, 5, 2, 1, 0};
  n = sizeof(v)/sizeof(v[0]);
  sort(v, n);
  for (i = 0; i < n; ++i)
    printf("%d\n", v[i]);
  return 0;
}

/* vim: set cc=80 nu: */
