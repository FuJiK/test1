#include "stdio.h"
int main(int argc, char const *argv[]) {
  int n,x,y;

  printf("\n   * * * 九九の表 * * *\n");
  printf("   | \n");

  for (size_t n = 1; n <= 9; n++) {
    for (size_t i = 1; i <= n; i++) {
      printf("%d",i);
    }

    printf("\n");
  }
  return 0;
}
