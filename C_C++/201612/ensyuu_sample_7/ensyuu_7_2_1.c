#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[]) {
  int ch;
  for (ch = 0; ch <= 127; ch++) {
    if (isprint(ch) != 0) {
        if (isalnum(ch) != 0) {
          printf("%c",ch );
        }else{
          printf("[%c]\n",ch );
        }
    }
  }
  return 0;
}
