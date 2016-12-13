#include <stdio.h>
int main(int argc, char const *argv[]) {
  int wa,data;
  wa = 0;
  do {
    printf("正数値入力 >");
    scanf("%d",&data);
    wa = wa + data;
    printf("wa = %d\n",wa );
  } while(data != 0);
  return 0;
}
