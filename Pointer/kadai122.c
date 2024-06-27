#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a = 5, b = 30, wrk, * pa = &a, * pb = &b, * pwrk = &wrk;
	printf("Às‘O\n");
	printf("a%d b%d", *pa, *pb);
	pwrk = pa;
	pa = pb;
	pb = pwrk;
	printf("\nÀsŒã\n");
	printf("a%d b%d", *pa, *pb);
}