#include <stdio.h>

int main(int argc, char const *argv[]) {
  /*float a,b,c;
  float goukei;*/
  double a,b,c;
  double goukei;

  a = 5.36;
  b = 8.47;
  c = 5.789;
  goukei = (a + b) * c / b;

  printf("結果 = %f\n", goukei);

  return 0;
}
