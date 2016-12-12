#include <stdio.h>
int main(int argc, char const *argv[]) {
  int wa,i;
  wa = 0;
  i = 1;
  while (i <= 100) {
    wa = wa + i;
    i ++;
  }
    printf("総和 = %d",wa );
  return 0;
}
