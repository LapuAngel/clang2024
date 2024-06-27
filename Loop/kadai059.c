#include<stdio.h>
main()
{
	int ia,ib,ic;
	for (ic = 0; ic <= 9; ic++) {
		printf("%3d", ic);
	}
	printf("\n");
	printf("==============================");
	printf("\n");
	for (ia = 1; ia <= 9; ia++) {
		printf("%d |", ia);
		for (ib = 1; ib <= 9; ib++) {
			printf("%3d", ia * ib);
		}
		printf("\n");
	}
}