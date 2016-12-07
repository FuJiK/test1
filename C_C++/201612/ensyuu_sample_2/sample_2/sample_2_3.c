#include <stdio.h>
int main(int argc, char const *argv[])
{
  int cnt[4] = {6,18,33,76};/* cnt を　int 型4個の配列で宣言後、初期化*/
  long goukei[2];/*goukeiをlong型2個の配列で宣言*/
  float x,y[] = {1.1,2.8,6.5 };/*ｙをfloat型３個の配列で宣言後、初期化*/
  double z[3];/*ｚをdouble型３個の配列で宣言*/
  x = 2.6;
  z[0] = x + y[0];
  z[1] = x + y[1];
  z[2] = x + y[2];
  goukei[0] = 100 * (cnt[0] +cnt[1]);
  goukei[1] = 100 * (cnt[2] +cnt[3]);

  printf("z[0] = %f\n",z[0] );
  printf("z[1] = %f\n",z[1] );
  printf("z[2] = %f\n",z[2] );
  printf("goukei[0] = %d\n",goukei[0] );
  printf("goukei[1] = %d\n",goukei[1] );
  return 0;
}
