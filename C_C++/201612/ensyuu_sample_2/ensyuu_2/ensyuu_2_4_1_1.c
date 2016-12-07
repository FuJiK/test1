#include <stdio.h>

int main(int argc, char const *argv[]) {

  char str[] = "ABCD";
  str[0] = str[0] + ('a'-'A') ;
  str[1] = str[1] + ('b'-'B') ;
  str[2] = str[2] + ('c'-'C') ;
  str[3] = str[3] + ('d'-'D') ;
  printf("str = %s\n", str);

  return 0;
}
