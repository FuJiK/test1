//特定条件で脱出するループ文

#include "stdio.h"
int main(int argc, char const *argv[]) {
  int n;
  int sum = 0;
  while ( 1 ) { //無限ループ
    /* 何故 while(1) が無限ループになるのか？
       Ｃ言語では ＝0：「偽」、≠0：「真」 である
       「1」は「≠0」、つまり「真」
        while(1) は「常に真」、つまり「無限ループ」 */
    scanf("%d",&n );
    if (n == -1) { //-1を入力したとき
      break; //ループから抜ける
    }
    sum = sum + n;
  }
  printf("sum = %d\n",sum );
  return 0;
}
