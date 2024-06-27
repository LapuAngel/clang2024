#include<stdio.h>
main()
{
	int no1;
	printf("整数を入力：");
	scanf("%d", &no1);
	if (10 <= no1 && no1 <= 49) {
		switch (no1/10) {
		case 1:
			printf("10点台です");
			break;
		case 2:
			printf("20点台です");
			break;
		case 3:
			printf("30点台です");
			break;
		case 4:
			printf("40点台です");
			break;
		}
	}
	else {
		printf("入力エラー");
	}
	
}