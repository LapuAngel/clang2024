#include<stdio.h>
main()
{
	int no1, no2;
	no2 = 0;
	for (; 1;) {
		printf("”‚ÍH");
		scanf("%d", &no1);
		if (no1 == -999) break;
		no2 += no1;
	}
	printf("‡Œv%d", no2);
}