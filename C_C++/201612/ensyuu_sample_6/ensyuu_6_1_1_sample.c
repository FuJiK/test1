#include <stdio.h>

int main( void )
{
	int a, b;

	printf( "整数値を２つ入力 " );
	scanf( "%d", &a );
	scanf( "%d", &b );

	if ( a>10 )
		printf( "ａは10より大きい\n" );
	else
		printf( "ａは10以下\n" );

	if ( a == b )
		printf( "ａとｂは等しい\n" );

	if ( b >= 10 ) {
		printf( "ｂは10以上\n" );
		a = 0;
		b = 0;
	}
	else {
		printf( "ｂは10より小さい\n" );
		a = a + 1;
		b = b + 1;
	}
	printf( "a = %d \t b = %d\n", a, b );

	return 0;
}
