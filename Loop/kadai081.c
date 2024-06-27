#include<stdio.h>
main()
{
	int ia,ib,goukei;
	ib = 0;
	goukei = 0;
	while (1) {
		printf("®”‚ÍH(-999‚ÅI—¹)");
		scanf("%d", &ia);
		if (ia == -999) break;
		ib++;
		goukei += ia;
	}
	printf("‡Œv%d\n•½‹Ï%.3f", goukei, (float)goukei / ib);
}