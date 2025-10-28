#define STR_PREFIX string
#define OBJ_PREFIX str
#include "prefix.h"

int main() {

  /* you can use the long ugly names */

  long_ugly_name_init();
  long_ugly_name_print();
  long_ugly_name_free();

  /* or choose Style 1 de-confliction */

  string_init();
  string_print();
  string_free();

  /* or Style 2 de-confliction */

  str.init();
  str.print();
  str.free();

  return 0;
}
