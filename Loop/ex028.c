#include<stdio.h>
main()
{
	int no1, no2;
	no1 = 0;
	printf("”‚ğ“ü‚ê‚Ä");
	scanf("%d", &no2);
	while (no2 != -999) {
		no1 += no2;
		printf("”‚ğ“ü‚ê‚Ä");
		scanf("%d", &no2);
	}
	printf("‡Œv%d\n",no1);
}