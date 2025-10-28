#include <stdio.h>
#include <wchar.h>
#include <locale.h>

/* This illustrates how...
 */

int main() {
  wchar_t w;

  setlocale(LC_ALL,"");
  while ((w = getwchar()) != WEOF)
    wprintf(L"%lc",w);
  return 0;
}

