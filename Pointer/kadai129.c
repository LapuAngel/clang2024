#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a[30] = { 3,5,7,9,11,13,15,17,19,21,0 };
	int b[30] = { 4,8,12,16,20,24,28,32,38,42,0 };
	int c[30];
	int* pa, * pb, * pc;
	pa = &a[0];
	pb = &b[0];
	printf("配列a=");
	while (*pa) {
		printf("%d ", *pa++);
	}
	printf("\n");
	printf("配列b=");
	while (*pb) {
		printf("%d ", *pb++);
	}

	pa = &a[0];
	pc = &c[0];
	while (*pc++ = *pa++);
	pa = &a[0];
	pb = &b[0];
	while (*pa++ = *pb++);
	pb = &b[0];
	pc = &c[0];
	while (*pb++ = *pc++);

	pa = &a[0];
	pb = &b[0];
	printf("\n配列a=");
	while (*pa) {
		printf("%d ", *pa++);
	}
	printf("\n");
	printf("配列b=");
	while (*pb) {
		printf("%d ", *pb++);
	}
}