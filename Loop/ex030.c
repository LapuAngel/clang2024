#include<stdio.h>
main()
{
	int no1, no2;
	printf("”‚ğ“ü‚ê‚Ä");
	scanf("%d", &no1);
	no2 = -1;
	while (no2 < 10) {
		no2 += 1;
		printf(" %d + %d = %d\n", no1, no2, no1 + no2);
	}
}