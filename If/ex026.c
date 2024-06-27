#include<stdio.h>
main()
{
	int no1;
	printf("月を入力：");
	scanf("%d", & no1);

	if (no1 == 2) {
		printf("最終日は 28 日もしくは 29 日です");
	}

	else if (no1 == 4 || no1 == 6 || no1 == 9 || no1 == 11) {
		printf("最終日は 30 日です");
	}

	else{
		printf("最終日は 31 日です");
	}
}