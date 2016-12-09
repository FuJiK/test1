#include <stdio.h>

int main(int argc, char const *argv[]) {
  char kamoku;
  int ten;

  printf("科目を選択して下さい(k:国語、s:数学)　：" );
  scanf(" %c", &kamoku );
  printf("点数を入力して下さい(0～100)　：" );
  scanf("%d", &ten );

  if (kamoku == 'k') {
      if (ten >= 73 && ten <= 100 ) {
        printf("国語の点数は平均点以上です。\n");
      }
      else if (ten >= 0 && ten < 73) {
        printf("国語の点数は平均点未満です。\n");
      }
      else{
        printf("国語の点数の入力エラーです。\n");
      }
  }
  else if (kamoku == 's') {
      if (ten >= 61 && ten <= 100 ) {
        printf("数学の点数は平均点以上です。\n");
      }
      else if (ten >= 0 && ten < 61) {
        printf("数学の点数は平均点未満です。\n");
      }
      else{
        printf("数学の点数の入力エラーです。\n");
      }
  }
  else{
    printf("科目の入力エラーです。\n");
  }

  return 0;
}
