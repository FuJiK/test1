#include <stdio.h>
int main(int argc, char const *argv[]) {
  char moji1[128],moji2[128];
  int i = 0;
  int flg = 0;

  printf("同じ長さの文字列を２つ入力しなさい\n");
  scanf("%s",&moji1);
  scanf("%s",&moji2);

  while (moji1[i] != '\0') {
    if (moji1[i] != moji2[i]) {
      flg++;
    }
    i++;
  }
  if (flg == 0) {
    printf("正しい文字列です\n");
  }
  else{
    printf("誤った文字列です\n");
  }

  return 0;
}
