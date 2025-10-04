#include "debug.h"

int main(int argc, char **argv) {
  debug(("error in code\n"));
  debug(("cannot open file %s\n", argv[0]));
  return 0;
}
