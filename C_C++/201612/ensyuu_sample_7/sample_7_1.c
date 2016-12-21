//文字列処理関数

#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[]) {
  char a[10],b[10];
  int n = 2;
  int len1,len2;
  char i[128],j[128];

  strcpy(a,"some");
  strcpy(b,"day");
  printf("%s\n",a );
  printf("%s\n",b );

  strcpy(a,b); //文字列a に文字列b をコピーする。
  printf("=============\n" );
  printf("変換後\n" );
  printf("=============\n" );
  printf("a:%s\n",a );
  printf("b:%s\n",b );

  strcat(a,b); //文字列a のうしろに文字列b を連結する。
  printf("a:%s\n",a );
  printf("b:%s\n",b );

  len1 = strlen(a); //文字列a の長さを取得。'\0'は長さに含めない。
  len2 = strlen(b); //文字列b の長さを取得。'\0'は長さに含めない。
  printf("長さ(a)　=　%d\n", len1);
  printf("長さ(b)　=　%d\n", len2);

  printf("=============\n" );
  printf("文字列を入力して下さい。(1)： " );
  scanf("%s",i );
  printf("文字列を入力して下さい。(2)： " );
  scanf("%s",j );

  if (strcmp(i,j) == 0) { //文字列a と文字列b を比較する。
    printf("等しい文字列\n" );
  }else{
    printf("異なる文字列\n" );
  }

  strncpy(a,b,n); //文字列a に文字列b の先頭 n文字をコピーする。
  printf("=============\n" );
  printf("a:%s\n",a );
  printf("b:%s\n",b );
  strncat(a,b,n); //文字列a のうしろに文字列b の先頭 n文字を連結する。
  printf("=============\n" );
  printf("a:%s\n",a );
  printf("b:%s\n",b );

  printf("=============\n" );
  printf("文字列を入力して下さい。(1)： " );
  scanf("%s",i );
  printf("文字列を入力して下さい。(2)： " );
  scanf("%s",j );
  if (strncmp(i,j,n) == 0) { //先頭 n文字だけ文字列a と文字列b を比較する。
    printf("等しい文字列\n" );
  }else{
    printf("異なる文字列\n" );
  }
  return 0;
}
