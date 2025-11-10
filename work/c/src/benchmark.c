#include <stdio.h>
#include <time.h>

/* Illustrates how to benchmark the performance of
 * a certain approach or techniqu.
 */

#define ITERATIONS 1000000000

int main() {
  long long i, x;
  clock_t start_time, end_time;
  double elapsed_time, ops_per_sec;

  start_time = clock();
  for (i = 0; i < ITERATIONS; ++i) {
    /* do some shit */
    x = 17 *ITERATIONS % 31;
  }
  end_time = clock();
  elapsed_time = (double) (end_time - start_time) / CLOCKS_PER_SEC;
  ops_per_sec = ITERATIONS / elapsed_time;
  printf("Elapsed time: %f seconds.  Operations per second: %f\n", 
      elapsed_time, ops_per_sec);
  return 0;
}

/* vi: set cc=80 nu: */
