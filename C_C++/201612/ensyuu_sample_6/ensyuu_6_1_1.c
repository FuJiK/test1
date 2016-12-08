#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a, b;
  printf("変数a b を入力して下さい　＞");
  scanf("%d",&a );
  scanf("%d",&b );

    if (a > 10) {
      printf("aは10より大きい\n" );
    }else{
      printf("aは10以下\n" );
    }
    if (a == b) {
      printf("aとbは等しい\n" );
    }
    if (b >= 10){
      printf("bは10以上\n" );
      a = 0;
      b = 0;
    }else{
      printf("bは10より小さい\n");
      a ++;
      b ++;
    }
    printf("a = %d \t b = %d ", a , b );

/*  if (a > 10) {
    printf("aは10より大きい" );
  } else if (a == b) {
    printf("aとbは等しい" );
  } else if (b >= 10) {
    printf("bは10以上" );

  } else  {
    printf("a: %d\n", a);
    printf("b: %d\n", b);
  }
*/

  return 0;
}
