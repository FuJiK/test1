#include <stdio.h>
int main(int argc, char const *argv[]) {
  int a[5],i;

  for (size_t i = 0; i < 5; i++) {
    a[i] = i * 2;
    printf("a[%d" "] = %d\n" ,i  ,a[i]  );
  }

  return 0;
}
