#include<stdio.h>
main()
{
	char no1;
	printf("文字を入力：");
	scanf("%c", &no1);
	
	if ('A' <= no1 && no1 <= 'Z') {
		printf("変換すると %c ", no1 + 0x20);
	}

	else if ('a' <= no1 && no1 <= 'z') {
		printf("変換すると %c ", no1 - 0x20);
	}
	
	else {
		printf("エラーメッセージ：アルファベットを入力してください");
	}
}