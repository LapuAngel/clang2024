#include<stdio.h>
main()
{
	int no1;
	printf("生年月日を入力：");
	scanf("%d", &no1);
	if (no1 >=1989) {
		printf("平成生まれです\n");
	}
	else {
		printf("昭和生まれです\n");
	}
}