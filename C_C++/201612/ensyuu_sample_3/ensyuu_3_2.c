#include <stdio.h>

int main(int argc, char const *argv[]) {

  int motikin,kaimono;
  motikin = 10000;
  kaimono = 468;
  int oturi,maisu;

  /*五千円札の枚数を求める*/
  oturi = motikin - kaimono;
  maisu = oturi / 5000;
  printf(" 五千円札の枚数 = %d\n", maisu);

  oturi = oturi % 5000;
  maisu = oturi / 1000;
  printf(" 千円札の枚数 = %d\n", maisu);

  oturi = oturi % 1000;
  maisu = oturi / 500;
  printf(" 500円玉の枚数 = %d\n", maisu);

  oturi = oturi % 500;
  maisu = oturi / 100;
  printf(" 100円玉の枚数 = %d\n", maisu);

  oturi = oturi % 100;
  maisu = oturi / 50;
  printf(" 50円玉の枚数 = %d\n", maisu);

  oturi = oturi % 50;
  maisu = oturi / 10;
  printf(" 10円玉の枚数 = %d\n", maisu);

  oturi = oturi % 10;
  maisu = oturi / 5;
  printf(" 5円玉の枚数 = %d\n", maisu);

  oturi = oturi % 5;
  printf(" 1円玉の枚数 = %d\n", oturi);
  return 0;
}
