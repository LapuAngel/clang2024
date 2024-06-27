#include <stdio.h>
main()
{
	int a = 0, goukei = 0, count = 0;

	printf("®”F");
	while ((scanf("%d", &a)) != EOF) {
		goukei += a;
		count++;
		printf("®”F");
	}
	printf("‡Œv%d   •½‹Ï%.2f\n", goukei, (float)goukei / count);
}