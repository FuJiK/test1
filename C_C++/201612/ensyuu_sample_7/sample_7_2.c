//文字処理関数
//変数は全て int型であり、0～UCHAR_MAX の値または EOF でなければなりません。
#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[]) {
  int c;

  printf("c:何か入力して下さい。" );
  c = getchar();

  //isalnum(c) != 0 /*文字c が英数字（A～Z、a～z、0～9）なら真（0以外の数）を返す。 文字c が英数字以外なら偽（0）を返す*/
     //isalpha(c) != 0 /*文字c が英文字（A～Z、a～z）なら真（0以外の数）を返す。 文字c が英文字以外なら偽（0）を返す。*/
     if(isupper(c) != 0){
    printf("英大文字入力\n");
  }else if(islower(c) != 0){
    printf("英小文字入力\n");
  }else if(isdigit(c) != 0){
    printf("数字入力\n");
  }else{
    printf("記号入力\n");
  }


  return 0;
}
