/*if 文の扱い方　*/
/*
>	より大きい	if (a > b)
>=	より大きいか、等しい（以上）	if (a >= b)
<	より小さい	if (a < b)
<=	より小さいか、等しい（以下）	if (a <= b)
==	等しい	if (a == b)　
!=	等しくない	if (a != b)
*/
#include <stdio.h>

int main(int argc, char const *argv[]) {
  double x,y,z;

  printf("浮動小数点xを入力して下さい ＞" );
  scanf("%lf",&x );                       //浮動小数点xの入力
  printf("浮動小数点yを入力して下さい ＞" );
  scanf("%lf",&y );                       //浮動小数点yの入力

  if (x >= y) {
    z = x - y;                            //xはy以上のとき
    printf("z = x - y = %lf\n",z );               //x-yの計算
  } else {
    z = y - x;                            //yはx以上のとき
    printf("z = y - x = %lf\n",z );               //y-xの計算
  }

  return 0;
}
