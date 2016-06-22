#include <stdio.h>

int main(void)
{
	int a, b;

	printf("値を入力してください。\n");
	scanf_s("%d", &a);//値を入力する。

	for (b = 2; b <= a; b++) {//繰り返す。
		if (b == a) {
			printf("%dは素数です。\n", a);//出力する。
		}
		else if ((a%b) == 0) {
			printf("%dは素数ではありません。\n", a);//出力する。
			break;
		}
	}
	return 0;
}
