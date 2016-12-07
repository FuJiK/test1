#include <stdio.h>

int main(int argc, char const *argv[]) {

  int a,b;
  double c,d;
  char e,f;
  char str[] = "COMPUTER";

  a = 5;
  b = 0x2fb;

  c = 3.14;
  d = 2.548e2;

  e = 'A';
  f = '8';

  printf("str = %s\n", str );
  printf("a = %d\n", a );
  printf("b = %x\n", b );
  printf("c = %f\n", c );
  printf("d = %e\n", d );
  printf("e = %c\n", e );
  printf("f = %c\n", f );

  return 0;
}
