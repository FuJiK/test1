#include <stdio.h>
int main(int argc, char const *argv[]) {
  char math;
  int seisu1 = 0,seisu2 = 0;
  int kekka = 0;

  printf("計算方法の入力( + - * /) >>");
  scanf("%c",&math );
  printf("整数値1の入力　≫　\n" );
  scanf("%d",&seisu1 );
  printf("整数値2の入力　≫　\n" );
  scanf("%d",&seisu2 );
  switch (math) {
    case '+':
      kekka = seisu1 + seisu2;
      printf("kekka = %d\n",kekka );
      break;
    case '-':
      kekka = seisu1 - seisu2;
      printf("kekka = %d\n",kekka );
      break;
    case '*':
      kekka = seisu1 * seisu2;
      printf("kekka = %d\n",kekka );
      break;
    case '/':
      kekka = seisu1 / seisu2;
      printf("kekka = %d\n",kekka );
      break;
  }
  return 0;
}
