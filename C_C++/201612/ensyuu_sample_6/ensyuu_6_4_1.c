#include <stdio.h>
int main(int argc, char const *argv[]) {
  int data1 = 1000;
  int data2;
  do {
    printf("正数値を入力(初期値1000)　＞" );
    scanf("%d",&data2 ); //入力
    data1 = data1 - data2; //計算
    printf("data1 = %d\n",data1); //表示
  } while(data1 > 0); //判定

  return 0;
}
