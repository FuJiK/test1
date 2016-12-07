#include <stdio.h>
int main(int argc, char const *argv[]) {
  int a = 12, b = 58;
  char str1[] = "Hello";
  char str2[] = "World";
  int data = 123;

  printf("右詰め：%10s%10s\n",str1,str2 );
  printf("右詰め：%-10s%-10s\n",str1,str2 );
  printf("符号あり：%+d\n",a );
  printf("8進数表示：%#o\n",b );
  printf("16進数表示：%#x\n",b );

  printf("%d\n", data);
  printf("%5d\n", data);
  printf("%10d\n", data);
  printf("%2d\n", data);
  printf("%05d\n", data);
  return 0;
}
