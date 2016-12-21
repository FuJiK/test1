#include <stdio.h>
int main(int argc, char const *argv[]) {
  char moji;
  printf("文字を入力しなさい　:" );
  scanf("%c",&moji );

  if ('A' <= moji && moji <= 'Z') {
    printf("英大文字です\n");
  }else if ('a' <= moji && moji <= 'z') {
    printf("英小文字です\n");
  }else if ('0' <= moji && moji <= '9') {
    printf("数字です\n");
  }else{
    printf("英字でも数字でもありません。\n");
  }

  //printf("moji:%c\n",moji );

  return 0;
}
