#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int tbl[][3] = { {10,20,30},
		{40,50,60},
		{70,80,90} };
	int* ptbl, i, j;
	ptbl = &tbl[0][0];
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d ", *ptbl);
			ptbl++;
		}
		printf("\n");
	}
}