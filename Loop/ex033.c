#include<stdio.h>
main()
{
	int i,goukei;
	goukei = 0;
	i = 0;
	for (; i != -999;) {
		goukei += i;
		printf("数は？");
		scanf("%d", &i);
	}
	printf("合計＝%d", goukei);
}