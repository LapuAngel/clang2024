#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int c[10];
	int ib = 9;
	for (int ia = 0; ia < 10; ia++) {
		c[ib] = a[ia];
		ib--;
	}
	printf("”z—ña=");
	for (int ia = 0; ia < 10; ia++) {
		printf("%d ", a[ia]);
	}
	printf("\n”z—ñc=");
	for (int ib = 0; ib < 10; ib++) {
		printf("%d ", c[ib]);
	}
}