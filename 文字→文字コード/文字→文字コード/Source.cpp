#include <stdio.h>
int main(void)

{
	char num;

	num = getchar();//文字を入力。
	printf("%cの文字コードは%xである\n", num,num);//文字と文字コードを出力する。

	return 0;
}
