#include<stdio.h>
main()
{
	int no1, no2;
	printf("数を入れて：");
	scanf("%d", &no1);
	no2 = 0;
	while (no1 != no2) {
		printf("*");
		no2 += 1;
	}
}