#include <stdio.h>
int main(int argc, char const *argv[]) {
  char str1[128],str2[128];
  int i = 0;

  printf("文字列1に文字列を入力して下さい＞＞" );
  scanf("%s",str1 );
  do {
    str2[i] = str1[i];
  } while(str1[i++] != '\0');
  printf("str2 = %s\n",str2 );
  return 0;
}
