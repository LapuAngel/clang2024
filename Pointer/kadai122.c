#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a = 5, b = 30, wrk, * pa = &a, * pb = &b, * pwrk = &wrk;
	printf("���s�O\n");
	printf("a��%d b��%d", *pa, *pb);
	pwrk = pa;
	pa = pb;
	pb = pwrk;
	printf("\n���s��\n");
	printf("a��%d b��%d", *pa, *pb);
}