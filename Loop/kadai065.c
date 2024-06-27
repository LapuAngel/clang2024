#include<stdio.h>
main()
{
	int ia, goukei;
	goukei = 0;
	do{
		printf("整数（-999で終了？）");
		scanf("%d",& ia);
		goukei += ia;
	} while (ia != -999);
	printf("合計＝%d", goukei+999);
}