#include<stdio.h>
main()
{
	int no1;
	printf("数を入れて");
	scanf("%d", &no1);
	while (no1 > 0) {
		printf("*");
		no1 -= 1;
	}
}