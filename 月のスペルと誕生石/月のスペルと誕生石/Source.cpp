#include <stdio.h>

int main(void)
{
	char month[13][10]{ {},{ "January  " },{ "Febrary  " },{ "March    " },{ "April    " },{ "May      " },{ "June     " },{ "July     " },{ "August   "},{ "September" },{ "October  " },{ "November " },{ "December " }//配列要素に１つずつ単語を代入する。
	};
	char stone[13][13]{ {},{ "ガーネット" },{ "アメシスト" },{ "アクアリマン" } ,{ "ダイヤモンド" },{ "エメラルド" },{ "パール" },{ "ルビー" },{ "ペリドット" },{ "サファイア" },{ "オパール" },{ "トパーズ" },{ "タンザナイト" }//配列要素に１つずつ単語を代入する。
	};
	int i, j, k;

	printf("何月ですか？\n");//出力する。

	scanf_s("%d", &i);//値を入力する。

	printf("%d月\n", i);

	printf("スペルは");

	for (j = 0; j < 10; j++) {//単語を出力する。
		printf("%c", month[i][j]);
	}
	printf("\n");//改行する。

	printf("誕生石は");

	for (k = 0; k < 13; k++) {//誕生石を出力する。
		printf("%c", stone[i][k]);
	}
	printf("\n");

	return 0;
}
