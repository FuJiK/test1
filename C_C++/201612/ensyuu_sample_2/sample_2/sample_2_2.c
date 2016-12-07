/*                    　　　　　　　　　　*/
/*    データの扱い方　サンプルプログラム　　*/
/*　　　　　　　　　　　　　　　　　　　　　*/
#include <stdio.h>

int main(int argc, char const *argv[]) {

    char    moji = 'H';   /* mojiを文字型(char:1bite)で宣言し、”H”で初期化　*/
    int     cnt  = 5;     /* cntを文字型(int:2bite)で宣言し、”H”で初期化　*/
    long    goukei;       /* goukeiを倍長整数型(long:4bite)で宣言　*/
    float   x,y;          /* x,yを単精度浮動小数点型(float:4bite)で宣言　*/
    double  z;            /* zを倍精度浮動小数点型(double:8bite)で宣言　*/
    /*　変数の宣言と初期化部分　プログラムの先頭に記述 */
    x = 2.6;               /* xに2.6を代入　*/
    y = 3.5;               /* yに3.5を代入　*/
    /* 変数宣言後の代入 */

    z = x + y;            /* x+y　を z に代入  */

    goukei = 100 * cnt;   /* 100 * cnt　を goukei に代入  */

    printf("moji = %c\n", moji );     /*moji  を出力　*/
    printf("z = %f\n", z);            /*z     を出力　*/
    printf("goukei = %d\n",goukei );  /*goukeiを出力　*/
    printf("z = %c\n", z);


  return 0;
}
