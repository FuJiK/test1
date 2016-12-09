#include <stdio.h>
int main(int argc, char const *argv[]) {
  int wa,i;

  wa = 0;

  for (size_t i = 1; i <= 100 ; i++) {
    wa = wa + i;
  }
  printf("総和　＝ %d\n", wa);
  return 0;
}
