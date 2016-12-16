//Segmentation fault (コアダンプ)
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int kekka[51];
  int a, b, i;
  int amari;

  printf("整数値a,bを入力≫a:");
  scanf("%d",&a );
  printf("               ≫b:");
  scanf("%d",&b );

  if (b == 0) {
      printf("処理終了:誤った値が入力されました\n");
      return 0;
  }


    printf("%d / %d = ", a , b );
    kekka[0] = a/b;
    for (i = 1; i < 51;i++) {
      amari = a%b;
      if (amari == 0){
        break;
      }
      a = amari * 10;
      kekka[i] = a / b;
    }
    printf("%d.",kekka[0]);
    for (a = 1; a < i; a++) {
      printf("%d",kekka[a]);
    }
    printf("\n");
    return 0;
}
