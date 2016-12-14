/*switch文　具体例*/
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int a;
  printf("定数を入力して下さい(1,3,5,10-16)　＞＞\n");
  scanf("%d",&a );
  switch ( a ) {
    case 1:
      printf("a = 1\n");
      break; //case 1 からswitchを抜ける

    case 3:
      printf("a = 3\n");
      break; //case 3 からswitchを抜ける

    case 5:
      printf("a = 5\n");
      break; //case 5 からswitchを抜ける

    case 10:
    case 11:
    case 12:
      printf("10 ~ 12\n");
      break;

    case 13:
    case 14:
    case 15:
    case 16:
      printf("13 ~ 16\n");
      break;

    default:
      printf("others\n");
      break; //default からswitchを抜ける
  }
  return 0;
}
