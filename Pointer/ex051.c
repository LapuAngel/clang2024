#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a = 50, b = 10, c;
	int* pa;
	int* pb;
	pa = &a;
	pb = &b;
	c = *pa + *pb;
	printf("%d+%d=%d", a, b, c);
}