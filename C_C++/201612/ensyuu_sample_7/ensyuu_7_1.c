#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[]) {
  char a[128];
  char b[128];
  int len1;
  int i = 0,j = 0;

  strcpy(a,"abcde");
  strcpy(b,"vwxyz");
  printf("%s\n",a );
  printf("%s\n",b );

  if (strcmp(a,b) == 0) { //文字列a と文字列b を比較する。
    printf("文字列a と b は等しい\n" );
  }else if (strcmp(a,b) > 0) {
    printf("文字列a は b より大きい\n" );
  }else{
    printf("文字列a は b より小さい\n" );
  }

  strcat(a,b); //文字列a のうしろに文字列b を連結する。
  len1 = strlen(a); //文字列a の長さを取得。'\0'は長さに含めない。
  printf("長さ(a)　=　%d\n", len1);
  printf("a:%s\n",a );

  while (1) {
    a[i] = a[i] + b[j];
    if (a[i] >= 100) {
      break;
    }
  }
  printf("%s\n",a );
  return 0;
}
