#include<stdio.h>
main()
{
	int no1;
	printf("秒数を入力：");
	scanf("%d", &no1);
	if (no1 >= 0) {
		if (no1 <= 5000) {
			printf("%d時間%d分%d秒です", no1 / 3600, (no1 % 3600) / 60, (no1 % 3600) % 60);
		}
	}
	else {
		printf("エラーメッセージ\n");
	}
}