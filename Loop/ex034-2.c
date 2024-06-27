#include<stdio.h>
main()
{
	int no1, no2;
	printf("”‚ÍH");
	scanf("%d", &no1);
	do {
		no1--;
		no2 = 5;
		do {
			no2--;
			printf("*");
		} while (no2 > 0);
		printf("\n");
	} while (no1 > 0);
}