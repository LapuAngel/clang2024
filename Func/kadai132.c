#include <stdio.h>
main()
{
	int a = 0, goukei = 0, count = 0;

	printf("®(OZÅI¹)H");
	while ((scanf("%d", &a)) != EOF) {
		goukei += a;
		count++;
		printf("®(OZÅI¹)H");
	}
	printf("v%d   ½Ï%.2f\n", goukei, (float)goukei / count);
}