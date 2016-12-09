#include "stdio.h"
int main(int argc, char const *argv[]) {
  int n,i;

  for (size_t n = 0; n < 10; n++) {
    for (size_t i = 0; i <= n; i++) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
