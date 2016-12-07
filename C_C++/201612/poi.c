#include <stdio.h>

int main(void)
{
  char *p = NULL;
  char *str="HelloWorld"; // = char str[]="HelloWorld"; 同じ意味です

  printf("*p, *strの値が格納されているメモリの番地を表示。\n");
  printf("変数に&をつけることによりメモリ番地を表示できます。\nHEXで表示。\n");
  printf("  memory address : p  =%0x\n",&p);
  printf("  memory address : str=%0x\n",&str);
  printf("  pの値  =%0x\n",p);
  printf("  strの値=%0x\n",str);

  printf("\n");
  printf("pにstrの値を入れます\n");
  printf("  p = str;\n");
  p = str;
  printf("これで、strとpが保持している値が同じになります。\n");
  printf("  pの値  =%0x\n",p);
  printf("  strの値=%0x\n",str);
  printf("しかし、pとstrが保持する値が同じになっただけで、pとstrの値が格納されているメモリアドレスは変わりません。\n");
  printf("  memory address : p  =%0x\n",&p);
  printf("  memory address : str=%0x\n",&str);
  printf("前回と同様なことが確認できます。\n");
  printf("\n");
  printf("ここまでは、変数はメモリのどこかの番地に格納する領域を取っているのだ！ということの理解\n");
  printf("と、その格納した領域の値がポインタ変数なので、メモリアドレスを示しているのだとう理解が必要です 。\n");
  
  printf("\n");
  printf("ポインタ変数の頭に*をつけると、ポインタ変数が持っている値のアドレスに格納されている値を取得できます。\n");
  printf("*pを出力してみます。\n");
  printf("ポインタ変数の値がHelloWorldの先頭メモリアドレスを示しているのでHが表示されます。\n");
  printf(" *p = %c\n", *p);
  printf("*pはp[0]と等式になります。\n");
  printf(" p[0] = %c\n", p[0]);
  printf("\n");
  printf("pをインクリメント(++)したらどううなるでしょうか?\n");
  printf("  pの値  =%0x\n",p);
  printf("  memory address : p  =%0x\n",&p);
  printf("p++\n");
  p++;
  printf("  pの値  =%0x\n",p);
  printf("  memory address : p  =%0x\n",&p);
  printf("pがインクリメントされただけですね。メモリアドレスはもちろんかわりません。\n");
  printf("\n");
  printf("インクリメントしたpの値が指し示すメモリアドレスの値を見てみます。\n");
  printf("HelloWorldのeが表示されます。\n");
  printf(" *p = %c\n", *p);

  printf("これがポインタによる基本的な操作になります。\n");
  printf("重要なのは、変数宣言したとき*をつけますが、*はポインタ変数だよ。\n");
  printf("そのまえにある型はポインタ変数が保持する値、つまりメモリアドレスに格納されている値の型を示します\n");
  printf("ポインタ変数に対する*, &, 無印についての動作の理解も重要です。\n");

  return 0;
}
