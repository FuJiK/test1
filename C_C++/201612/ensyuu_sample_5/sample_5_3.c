#include "stdio.h"

int main(int argc, char const *argv[]) {
  char c;
  int i;
  long l;
  float f;
  double d;
  char str[30];

  printf("1文字入力＝");
  scanf("%c",&c );
  printf("1文字出力：%c\n",c );

  printf("文字列入力＝");
  scanf("%s",&str );
  printf("文字列出力：%s\n",str );

  printf("10進入力＝");
  scanf("%d",&i );
  printf("10進出力：%d\n",i );
  //10進数出力

  printf("16進入力＝");
  scanf("%x",&i );
  printf("16進出力：%x\n",i );
  //16進数⇒10進数：出力

  printf("long入力＝");
  scanf("%ld",&l );
  printf("long出力：%ld\n",l );

  printf("浮動小数点入力＝");
  scanf("%f",&f );
  printf("浮動小数点出力：%f\n",f );

  printf("double入力＝");
  scanf("%lf",&d );
  printf("double出力：%lf\n",d );

  return 0;
}
