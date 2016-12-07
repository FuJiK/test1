#include <stdio.h>
int main(int argc, char const *argv[]) {

  double a,b,c,keisan;
  a = 53.6;
  b = 84.7;
  c = 57.89;
  keisan = (a + b)/(c * b);

  printf(" 小数形式：　%f\n",keisan );
  printf(" 指数形式：　%e\n",keisan );

  return 0;
}
