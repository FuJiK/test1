//how to use The continue statement

#include <stdio.h>
int main(int argc, char const *argv[]) {
  int i = 1;
  int n,sum;
  sum = 0;
  while (i <= 10) { //10回ループ
    printf("input number(%d) : " ,i);
    scanf("%d", &n ); //読み込み
    if (n < 0)  {//nが0以下なら！
      continue; //以下の処理をスキップ(もう一度scanfを実行)
    }
    sum = sum + n;
    i++;
  }
  printf("sum = %d\n", sum);
  return 0;
}
