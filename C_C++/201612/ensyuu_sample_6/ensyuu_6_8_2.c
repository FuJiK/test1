/*
・Ctrl+D　が入力されるまで次の処理
・１を入力　　　:　"apple" と表示
・２を入力　　　:　"banana" と表示
・３を入力　　　:　"cherry" と表示
・それ以外を入力:　"???" と表示
*/

#include <stdio.h>
int main(int argc, char const *argv[]) {
  int n;
  printf("1～3 の整数値入力（終了条件: Ctrl+Z or Ctrl+D ）\n" );

  while ( scanf("%d", &n ) != EOF) {
    switch (n) {
      case 1:
             printf("apple\n" );
             break;
      case 2:
             printf("banana\n" );
             break;
      case 3:
             printf("cherry\n" );
             break;
      default:
             printf("???\n" );
             break;
    }
  }

  return 0;
}
