#include <stdio.h>

int main(int argc, char const *argv[])
{
	char c = 'A';
	char *p;			/* ポインタの宣言 */

	p = &c;			/* ポインタの値設定 */
	printf( "%c\n", *p );	/* ポインタの指す値を表示 */
  *p = *p +25;		/* ポインタの指す値を +2 */
	printf( "%c\n", *p );	/* ポインタの指す値を表示 */

	return 0;
}
