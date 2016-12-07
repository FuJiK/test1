#include <stdio.h>
int main(int argc, char const *argv[]) {
  int A = 3000;
  int B = 5000;
  long goukei;
  /*定義系*/

  goukei = (long) A * 12 + (long)B * 8;
  printf(" 結果1 %ld\n", goukei);
  /* Aを12個とBを8個買った時*/
  goukei = (long)A * 8 + (long)B * 12;
  printf(" 結果2 %ld\n", goukei);
  /* Aを8個とBを12個買った時*/

  return 0;
}
