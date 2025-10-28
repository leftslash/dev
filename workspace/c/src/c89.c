#include <stdio.h>

/* This illustrates how C89 will choke on the initializer and mixing
 * of statements with declarations.  To see this in action:
 *   cc -stdc=89 -pedantic c89.c
 */

int main(int argc, char **argv) {
  int x = 10;
  printf("%d\n", x);
  int y = 20;
  return 0;
}

/* vi: set ft=c cc=80: */
