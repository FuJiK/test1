//for文の扱い方　サンプル
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int i,sum,mul;

  sum = 0;
  mul = 1;

  for (size_t i = 1; i <= 5 ; i++) {
    sum = sum + i;
    mul = mul * i;
  }
  printf("和　＝ %d\n", sum);
  printf("積　＝ %d\n", mul);
  return 0;
}
