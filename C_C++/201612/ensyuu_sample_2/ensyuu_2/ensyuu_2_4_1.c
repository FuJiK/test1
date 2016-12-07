#include <stdio.h>

int main(int argc, char const *argv[]) {
  int str[] = {'A','B','C','D','\0'};

  str[0] = str[0] + 32;
  str[1] = str[1] + 32;
  str[2] = str[2] + 32;
  str[3] = str[3] + 32;

  printf("str[0] = %c\n", str[0] );
  printf("str[1] = %c\n", str[1] );
  printf("str[2] = %c\n", str[2] );
  printf("str[3] = %c\n", str[3] );
  return 0;
}
