#include<stdio.h>
main()
{
	int no1, no2, no3, no4;
	printf("”‚ÍH");
	scanf("%d", &no1);
	no2 = 0;
	do {
		no2 ++;
		no3 = no2;
		no4 = no1 - no2;
		do {
			printf(" ");
			no4--;
		} while (no4 >= 0);
		do {
			printf("*");
			no3--;
		} while (no3 > 0);
		printf("\n");
	} while (no1 > no2);
}