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
	printf("���s�O�F*pa=%d   *pb=%d\n\n", *pa, *pb);
	w = pa;
	pa = pb;
	pb = w;
	printf("���s��G*pa=%d   *pb=%d", *pa, *pb);
}