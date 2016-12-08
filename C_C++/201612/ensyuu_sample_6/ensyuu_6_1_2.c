#include "stdio.h"

int main(int argc, char const *argv[]) {
  char ch;

  printf("文字を入力しなさい　>>" );
  scanf("%c",&ch );

  if (ch >= 'A' && ch <= 'Z'  ) {
    ch = ch + ('a' - 'A');
  }
  printf("ch = %c\n",ch );
  return 0;
}
