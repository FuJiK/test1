#include "stdio.h"
int main(int argc, char const *argv[]) {
  int n,x,y,i;

  printf("\n   * * * 九九の表 * * *\n");
  printf("   |");
  for (size_t i = 1; i <= 9; i++) {
      printf("%3d",i ); //上の数字を表示
  }
  printf("\n--------------------------------\n");

  for (size_t x = 1; x <= 9; x++) {
      printf( "%d  |", x );	 //左の数字を表示
    for (size_t y = 1; y <= 9; y++) {
      n = x * y;
      printf("%3d",n );
    }
    printf("\n");
  }
  return 0;
}
