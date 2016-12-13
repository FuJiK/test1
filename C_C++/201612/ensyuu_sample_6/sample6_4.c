#include <stdio.h>
int main(int argc, char const *argv[]) {
  int a[5] = {1,2,3,4,-1},b[5];
  int i = 0;
  do {
    b[i] = a[i];
    printf("%d %d\n",b[i] ,a[i] );
  } while(a[i++] != -1);

  return 0;
}
