#include <stdio.h>
int main(void)
{
	int num1, num2;

	for (num1 = 1, num2 = 1; num1 <= 10000; num1 = num1 * 2, num2++) //一日のお小遣いが１万円を超えるまで繰り返す。
	{
		printf("%d日目のお小遣いは%d円です。\n", num2, num1);
	}
	printf("お小遣いが１万円を超える日は%d日目です。\n", num2);//日にちを出力。


	return 0;
}
