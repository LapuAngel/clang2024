#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	double a, b, * pa, * pb;
	printf("�����l�P�H");
	scanf("%lf", &a);
	printf("�����l�Q�H");
	scanf("%lf", &b);
	pa = &a;
	pb = &b;
	if (*pa < *pb) {
		printf("�傫���ق���%f", *pb);
	}
	else {
		printf("�傫���ق���%f", *pa);
	}
}