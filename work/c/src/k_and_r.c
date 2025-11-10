#include <stdio.h>

/* This illustrates how...
 */

int main() {
  if (-1 < (unsigned char) 1)
    /* ANSI C converts both to signed */
    printf("%s\n","ANSI C");
  else
    /* K&R C converts -1 to unsigned 255 */
    printf("%s\n","K&R C");
  return 0;
}

