#include <assert.h>

/* Shows a way to include a message with a failed assertion.
 * Note the use of the parentheses and use of the comma operator. 
 */

int main(int argc, char **argv) {
  assert(("Not Orwellian", 2 + 2 == 5));
}

/* vi: set ft=c cc=80: */
