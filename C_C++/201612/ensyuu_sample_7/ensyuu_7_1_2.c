#include <stdio.h>
#include <string.h>

#define LEN 100  /*（注）#defineについてはまたのちほど*/
/*文字列 A に入力された文字列を、100文字丁度になるまで、文字列 B に連結しなさい*/

int main(int argc, char const *argv[]) {
  char str_a[LEN + 1] = ""; //文字列先頭にNULL設定
  char str_b[LEN + 1] = "";

  while ( strlen( str_b ) < 100 ) {
    printf( "文字列を入力して下さい。" );
    scanf( "%s",str_a );
    strncat( str_b , str_a , LEN - strlen( str_b ) );
    printf( "\nstr = %s\n", str_b );
  }
  printf( "len = %d\n", strlen( str_b ) );
  return 0;
}
