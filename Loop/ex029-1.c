#include<stdio.h>
main()
{
	int no1;
	printf("��������");
	scanf("%d", &no1);
	while (no1 > 0) {
		printf("*");
		no1 -= 1;
	}
}