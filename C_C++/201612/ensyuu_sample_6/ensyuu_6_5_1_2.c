#include <stdio.h>
int main(int argc, char const *argv[]) {
  int seisu = 0;
  printf("input number( 1-10 )　≫" );
  scanf("%d",&seisu );
  switch (seisu) {
    case 1:
    case 2:
    case 3:
      printf("1: one 2: two 3: three\n" );
      break;

    case 4:
    case 5:
    case 6:
      printf("4: four 5: five 6: six\n" );
      break;

    case 7:
    case 8:
    case 9:
    case 10:
      printf("7: seven 8: eight 9: nine 10: ten\n" );
      break;
    default:
      printf("number input err\n");
      break;
  }
  return 0;
}
