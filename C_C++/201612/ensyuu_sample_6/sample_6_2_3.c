#include "stdio.h"
int main(int argc, char const *argv[]) {
  int i,n;

  for (size_t i = 0; i < 5; i++) {
    for (size_t n = 0; n < 10; n++) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
