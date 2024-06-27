#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a = 100, b = 200;
	int* pa;
	int* pb;
	int* w;
	pa = &a;
	pb = &b;
	printf("実行前：*pa=%d   *pb=%d\n\n", *pa, *pb);
	w = pa;
	pa = pb;
	pb = w;
	printf("実行後；*pa=%d   *pb=%d", *pa, *pb);
}