#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a=105,b=20,c,d;

  c = a + b;
  printf("a + b = %d\n",c );
  c = a - b;
  printf("a - b = %d\n",c );
  c = a * b;
  printf("a * b = %d\n",c );
  c = a / b;
  printf("a / b = %d\n",c );
  c = a % b;
  printf("a %% b = %d\n",c );

  a = 3;/*インクリメント演算子（前置演算）の例*/
  b = 3;
  ++a;
  b++;
  c = ++a;
  d = b++;
  printf("a = %d  b = %d c = %d d = %d \n", a, b, c, d );

  a = 5;/*ディクリメント演算子（後置演算）の例*/
  b = 5;
  --a;
  b--;
  c = --a;
  d = b--;
  printf("a = %d  b = %d c = %d d = %d \n", a, b, c, d );

  return 0;
}
