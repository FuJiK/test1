//The continue statement used in the for statement

#include "stdio.h"
int main(int argc, char const *argv[]) {
  int i = 1 ,n,sum;

  sum = 0;
//  printf("正の整数を入力："); //ここに入れることで5回同じ計算を繰り返す。
//  scanf("%d",&n ); //ここに入れることで5回同じ計算を繰り返す。
  for (size_t i = 1; i <= 5; i++) {
    printf("正の整数を入力："); //ここに入れることで5回別の計算を繰り返す。
    scanf("%d",&n ); //ここに入れることで5回別の計算を繰り返す。
    if (n < 0){
      continue;
    }
    sum = sum + n;
  }
  printf("sum = %d\n",sum );
  return 0;
}
