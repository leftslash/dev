#include <stdio.h>

int main() {
  int neg;
  size_t zero;

  neg = -2;
  zero = 0;
  /* signed gets coerced into unsigned causing overflow */
  if (neg < zero)
    puts("negative is smaller than zero");
  else
    puts("negative is *larger* than zero");
  return 0;
}
