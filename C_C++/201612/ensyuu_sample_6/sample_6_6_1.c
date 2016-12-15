#include <stdio.h>
int main(int argc, char const *argv[]) {
  int i,n,sum;
  sum = 0;

  for (size_t i = 1; i <= 10; i++) {

    printf("整数値を入力して下さい。≫");
    scanf("%d",&n );

    if (n <= -1) {
      sum = sum + n; //-1 以下を入力した場合の処理
      printf("sum = %d\n",sum );
      break;
    }
    sum = sum + n; //0以上を入力した場合の処理
    printf("sum = %d\n",sum );
  }
  return 0;
}
