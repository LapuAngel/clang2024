#include<stdio.h>
main()
{
	int no1, no2, no3;
	printf("数を入れて");
	scanf("%d", &no2);
	for (no1 = 1; no1 <= 5; no1++) {
		no3 = no2 * no1;
		printf(" %d ", no3);
	}
}