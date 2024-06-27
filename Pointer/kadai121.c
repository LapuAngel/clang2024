#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a = 100, b = 10;
	int* pa;
	int* pb;
	pa = &a;
	pb = &b;
	printf("%d+%d=%d\n", *pa, *pb, *pa + *pb);
	printf("%d-%d=%d\n", *pa, *pb, *pa - *pb);
	printf("%d*%d=%d\n", *pa, *pb, *pa * *pb);
	printf("%d/%d=%d\n", *pa, *pb, *pa / *pb);
}