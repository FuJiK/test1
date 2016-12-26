#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[]) {
  char str[] = "AbcDefGHijk1234lmNOP";
  int c;
  c = 0;

  printf("str(before) = %s\n",str );
  while (str[c] != '\0' ) {
         str[c] = toupper( str[c] );
         c++;
  }
  printf("str(after) = %s\n",str );
  return 0;
}
