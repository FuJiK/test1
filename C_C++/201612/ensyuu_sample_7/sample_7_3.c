#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(int argc, char const *argv[]) {
  double y,e,z;
  int a;
  y = exp(1.0);
  e = y;
  printf("指数関数e の x乗の値 :%lf\n",y );
  y = log(e);
  printf("自然対数（e を底とする対数）logex の値 :%lf\n",y );
  y = log10(100);
  printf("常用対数（10を底とする対数）log10x の値 :%lf\n",y );
  y = sqrt(2.0);
  printf("x の平方根の値 :%lf\n",y );
  z = pow(2.0, 3.0);
  printf("x の y乗の値 :%lf\n",z );
  y = sin(90.0 * 3.14159 / 180.0);
  printf("x（ラジアン）のサイン値 :%lf\n",y );
  y = cos(90.0 * 3.14159 / 180.0);
  printf("x（ラジアン）のコサイン値 :%lf\n",y );
  y = tan(45.0 * 3.14159 / 180.0);
  printf("x（ラジアン）のタンジェント値 :%lf\n",y );
  a = abs(-2);
  printf("int型データ n の絶対値を int型で返す。 :%d\n",a );
  y = fabs(-23.4);
  printf("double型データ x の絶対値を double型で返す。 :%lf\n",y );
  y = ceil(12.11);
  printf("データ x を切り上げた値 :%lf\n",y );
  y = ceil(-5.68);
  printf("データ x を切り上げた値 :%lf\n",y );
  y = floor(12.11);
  printf("データ x を切り下げた値 :%lf\n",y );
  y = floor(-5.68);
  printf("データ x を切り下げた値 :%lf\n",y );
  z = fmod(10.5, 3.2);
  printf("x / y の余りの値:%lf\n",z );

  return 0;
}
