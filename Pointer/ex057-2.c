#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int tbl[][3] = { {10,20,30},
		{40,50,60},
		{70,80,90} };
	int* ptbl, i, j;
	ptbl = &tbl[0][1];
	for (i = 0; i < 3; i++) {
		printf("%d ", *ptbl);
		ptbl += 3;
	}
}
