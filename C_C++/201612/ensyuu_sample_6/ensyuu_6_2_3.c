#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i,amari;

  for (size_t i = 100; i >= 1 ; i--) {
    amari = 100 % i;
    if (amari == 0) {
      printf("100は%dで割り切れる\n", i);
    }
  }
  return 0;
}
