#include "stdio.h"
int main(int argc, char const *argv[]) {
  int a1;
  char c;
  double a2;

  printf("数値１＝");
  scanf("%d",&a1 );//1
  printf("文字＝");
  scanf("%c",&c );//2
  printf("数値2＝");
  scanf("%d",&a2 );//3
  /*scanf("%c",&c );このままでは入力した数字仮に”123”とすると
    |1|2|3|\n|という数字が入力されることになる。
    scanfで変数a1に123を入れても、\nはそのまま入力バッファに残るため、
    1 の処理のときには|1|2|3|まで実行され、
    2 の処理のときには入力バッファ内に残っていたゴミ”|\n|”を変数cに入れてしまう。
    3 の処理のときには|4|5|6|\n|の中の|4|5|6|を変数a2に入れる。
*/
  printf("対策方法\n");
  printf("数値１＝");
  scanf("%d",&a1 );//1
  printf("文字＝");
  scanf("%*c%c",&c );//改行の読み捨て
  printf("文字＝");
  scanf(" %c",&c );// 空白(改行含む)を読み飛ばす。
  //ただし、空白類文字を入力したいときにはこの方法は使えません。
  printf("数値2＝");
  scanf("%d",&a2 );


  return 0;
}
