#include "stdio.h"

int main(int argc, char const *argv[]) {

  int i,j,k,no = 1;

  for (size_t i = 0; i < 10; i++) {
    for (size_t j = 0; j < 10; j++) {
      for (size_t k = 0; k < 10; k++) {
        no = no + (i * j + k);
        if (no >= 2000) {
          goto OUT; //ループ脱出
        }
      }
    }

    printf("i:%d j:%d k:%d\n no:%d \n",i,j,k ,no);
    OUT:
  }
  return 0;
}
