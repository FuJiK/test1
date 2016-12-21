/*
start Number divided 100.0
and so, Enter a floating point number other than 0.0
and divide the number to be divided.
This processing, repeat 10 times.
But, please to end this process
when the division result becomes less than 1.0.
=====================
実行結果例

浮動小数点数を入力 5
data1 = 20.000000
浮動小数点数を入力 5
data1 = 4.000000
浮動小数点数を入力 5
data1 = 0.800000
=====================
*/

#include <stdio.h>
int main(int argc, char const *argv[]) {
  double data1,data2;
  data1 = 100.0;
  int i;

  for (i = 1; i <= 10; i++) {
    printf("変数data2に実数値を代入:" );
    scanf("%lf",&data2 );
    if (data2 == 0.0) {
      continue;
    }
    data1 = data1 / data2;
    printf(" data1 = %lf\n",data1 );
    if (data1 < 1.0) {
      break;
    }
  }
  return 0;
}
