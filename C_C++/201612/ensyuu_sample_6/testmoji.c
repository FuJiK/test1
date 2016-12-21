#include <stdio.h>
int main(int argc, char const *argv[]) {
  char c;

  for (c = 32; c <= 126; c++) {
    printf("文字コード %d \nの文字は %c です\n",c,c);
  }
  return 0;
}
