#include "stdio.h"
int main(int argc, char const *argv[]) {
  int i,j;

  i = 0;
  while (i < 10) {
      j = 0;
      while (j <= i) {
      printf("%d",j );
      j++;
    }
    printf("\n" );
    i++;
  }

  return 0;
}
