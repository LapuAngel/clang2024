#include<stdio.h>
main()
{
	int no1;
	printf("”‚ð“ü‚ê‚Ä");
	scanf("%d", &no1);
	while (no1 > 0) {
		printf("*");
		no1 -= 1;
	}
}