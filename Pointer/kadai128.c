#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a[30] = { 3,5,7,9,11,13,15,17,19,21,0 };
	int b[30] = { 4,8,12,16,20,24,28,32,38,42,0 };
	int* pa, * pb;
	pa = &a[0];
	pb = &b[0];
	printf("�z��b[]=");
	while (*pa != 0) {
		printf("%d ", (*pa++) + (*pb++));
	}
}