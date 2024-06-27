#include<stdio.h>
main()
{
	int no1;
	printf("整数を入力：");
	scanf("%d", &no1);
	if (no1 >= 0) {
		printf("入力値はプラスです\n");
	}
	else {
		printf("入力値はマイナスです\n");
	}
}