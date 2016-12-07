/*printf()の扱い方*/
#include <stdio.h>

int main(int argc, char const *argv[]) {

  int   a;
  long  l;
  float b;
  char  st[] = "print test";

  a = 67;
  printf("10進数 : %d\n",a ); /*aを10進数で出力*/
  printf("16進数 : %x\n",a ); /*aを10進数で出力*/
  printf("char : %c\n",a );  /*aを文字として出力*/
  printf("data = %d %x %c\n",a ,a ,a ); /*全部表示*/

  l = 1234567890;
  printf("long: %ld\n\a", l); /*lをlong型10進数で出力*/

  b = 1234.56;
  printf("float: %f\n",b ); /*bを小数点数で出力*/
  //丸め誤差の結果1234.560000にはならない
  //丸め誤差：コンピュータ内部で10進小数を2進小数に変換する際に生じる誤差
  printf("index: %e\n",b ); /*bを指数形式で出力*/

  printf("string: %s\n",st ); /*stを文字列で出力*/
  return 0;
}
