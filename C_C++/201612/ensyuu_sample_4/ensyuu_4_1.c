#include <stdio.h>

int main(int argc, char const *argv[]) {

  int a = 30000, b = 10000;
  long c;
  char str[] = "=========================";
  c = (long) a + b;
  //c = a + b;
  printf("c = %ld\n",c );
  printf("sizeof \n" );
  printf("%s\n", str );
  printf("char : %d\n", sizeof(char));
  printf("short int : %d\n", sizeof(short int));
  printf("int : %d\n", sizeof(int));
  printf("long : %d\n", sizeof(long));
  printf("long int : %d\n", sizeof(long int));
  printf("float : %d\n", sizeof(float));
  printf("double : %d\n", sizeof(double));
  printf("long double: %d\n", sizeof(long double));
  return 0;
}
