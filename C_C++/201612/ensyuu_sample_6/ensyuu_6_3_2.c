#include <stdio.h>
int main(int argc, char const *argv[]) {
  int wa,data;

  wa = 0;
  printf("整数値入力 > ");
  scanf("%d",&data ); //1.変数 data を入力

  while (data != 0) {
    wa = wa + data; //和の計算
    printf("wa = %d\n", wa); //wa =　の表示
    printf("整数値入力 > ");
    scanf("%d",&data ); //2.変数 data を入力
  }
    printf("総和 = %d",wa );

  return 0;
}
