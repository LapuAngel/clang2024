#include<stdio.h>
main()
{
	int no1;
	printf("整数？");
	scanf("%d", &no1);
	for (; no1 > 0; no1--) {
		printf("自分の名前");
	}
}