#include <stdio.h>
int main(int argc, char const *argv[]) {
  int i,b;
  int a[5] = {1,10,100,1000,-1};
  i = 0;
  b = 0;

  while (a[i] != -1) {
    printf("%d\n",a[i] );
    i++;
  }
  while (b < 10) {
    printf("%2d",b );
    b++;
  }
  return 0;
}
