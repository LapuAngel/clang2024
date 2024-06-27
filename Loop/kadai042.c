#include<stdio.h>
main()
{
	int no1, no2,no3;
	no1 = 0;
	no3 = 0;
	printf("”‚ğ“ü‚ê‚Ä");
	scanf("%d", &no2);
	while (no1 < 300) {
		no1 += no2;
		no3++;
		printf("”‚ğ“ü‚ê‚Ä");
		scanf("%d", &no2);
	}
	printf("‡Œv%d\n", no1);
}