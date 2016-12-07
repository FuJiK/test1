/*キャストについて*/
#include <stdio.h>

int main(void) {
  double x;
  int a = 10, b = 3, c = 5, d = 2;

  x = (double)a / (double)b;
  printf(" x = %lf\n", x );/*キャストあり1*/

  x = (double)a / b;
  printf(" x = %lf\n", x );/*キャストあり2*/

  x = (double) (a / b);
  printf(" x = %lf\n", x );/*キャスト意味なし2*/

  x = a / b;
  printf(" x = %lf\n", x );/*キャスト無し*/

  x = a / b + c / d;
  printf(" x = %lf\n", x );/*キャスト無し*/

  x = (double)a / b + c / d ;
  printf(" x = %lf\n", x );/*キャストあり1うまくいかない*/

  x = (double)a / b +(double) c / d ;
  printf(" x = %lf\n", x );/*キャストあり2うまくいく*/

  return 0;
}
