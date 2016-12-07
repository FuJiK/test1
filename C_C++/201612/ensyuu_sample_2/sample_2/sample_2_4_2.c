#include <stdio.h>

int main(int argc, char const *argv[]) {

  char str1[128] = "aaaa";
  char str2[10] = {'A','B','C','\0'};
  char str3[] = {'a','b','c','\0'};
  char str4[10] = "computer";
  char str5[] = "turbo-C";

  printf("str1 = %s\n", str1);
  printf("str2 = %s\n", str2);
  printf("str3 = %s\n", str3);
  printf("str4 = %s\n", str4);
  printf("str5 = %s\n", str5);
  return 0;
}
