#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int c[10];
	printf("”z—ña=");
	for (int ia = 0; ia < 10; ia++) {
		printf("%d ", a[ia]);
	}
	printf("\n");
	printf("”z—ñb=");
	for (int ia = 0; ia < 10; ia++) {
		printf("%d ", b[ia]);
	}
	printf("\n");
	printf("”z—ñc=");
	for (int ia = 0; ia < 10; ia++) {
		c[ia] = a[ia] + b[ia];
		printf("%d ", c[ia]);
	}
}