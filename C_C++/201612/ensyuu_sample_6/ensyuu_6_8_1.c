#include "stdio.h"
int main(int argc, char const *argv[]) {
  int data = 1;
  int cnt = 1;

  while (1) {
    data = data * 2;
    printf("data = %ld\n", data);
    if (data >= 32767) {
      break;
    }
    cnt ++;
  }
  printf("cnt = %d",cnt );
  return 0;
}
