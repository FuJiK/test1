/*EOF
  while (scanf(……) != EOF) は
  「Ctrl+Z が入力されるまで入力を繰り返す」という処理の定石
  ※また、VC++ や BCB などの Windows の C では、
　「Ctrl+Z」は「Undo」のショートカットキーになっているためか、
　　その後の printf() などの出力を打ち消してしまうようです。　
　　どうやらこの現象はWindows9xとMeのDOS窓のバグ（仕様？）のようです。
*/
#include "stdio.h"
int main(int argc, char const *argv[]) {
  int n;
  int sum = 0;

  while (scanf("%d", &n ) != EOF) { //「Ctrl+Z が入力されるまで」という意味
    sum = sum + n;
  }
  printf("sum = %d\n", sum);
  return 0;
}
