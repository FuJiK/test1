#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[]) {
  char str[128];
  long x = 0;
  int i = 0;

  printf("16進数を入力：" );
  scanf("%s",str );

  /*入力データ変換処理*/
  while ( str[i] != '\0' ) {
    //16進数で表せる文字か
    if (/* condition */) {
      //数字で表せる文字か
      if (/* condition */) {

      }
    }


  }

  return 0;
}
