#include <stdio.h>

int main(int argc, char const *argv[]) {

  int data1[] = {1,22,333,4444};
  double data2[] = {12.34,0.002,5678.12,912.1};

  printf("data1[0] :%5d\n", data1[0]);
  printf("data1[1] :%5d\n", data1[1]);
  printf("data1[2] :%5d\n", data1[2]);
  printf("data1[3] :%5d\n\n", data1[3]);
//int型の出力

  printf("data2[0] :%9.3lf\n", data2[0]);
  printf("data2[1] :%9.3lf\n", data2[1]);
  printf("data2[2] :%9.3lf\n", data2[2]);
  printf("data2[3] :%9.3lf\n", data2[3]);
//double型の出力

  return 0;
}
