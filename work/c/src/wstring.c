#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    wchar_t *wideString;

    setlocale(LC_ALL, "");
    wideString = L"Hello, wide 世界 with wprintf!";
    wprintf(L"%ls\n", wideString);
    return 0;
}
