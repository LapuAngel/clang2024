#include<stdio.h>
main()
{
	int no1, no2;
	no2 = 0;
	for (no1 = 1; no1 <= 10; no1++) {
		no2 = no2 + no1;
		printf("1 から %d までの和 = %d\n", no1, no2);
	}
}