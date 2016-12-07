#include <stdio.h>

int main(int argc, char const *argv[])
{
  char c = 'A'; /* char の宣言*/
  char *p ; /* pointerの宣言 */

  p =  &c;
  printf("%c\n", *p );

  return 0;
}
