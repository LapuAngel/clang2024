#include<stdio.h>
main()
{
	int no1;
	printf("西暦を入力：");
	scanf("%d",&no1 );
	if (no1 % 4 == 0) {
		printf("うるう年です");
	}
	else {
		printf("うるう年ではありません");
	}
}