#include <stdio.h>

#define getchar()  (_Files[0]->_Next < _Files[0]->_Rend \
    ? *_Files[0]->_Next++ : (getchar)())

int main() {
  int fgetc = getchar();
  return 0;
}
