#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	double a, b, * pa, * pb;
	printf("実数値１？");
	scanf("%lf", &a);
	printf("実数値２？");
	scanf("%lf", &b);
	pa = &a;
	pb = &b;
	if (*pa < *pb) {
		printf("大きいほう＝%f", *pb);
	}
	else {
		printf("大きいほう＝%f", *pa);
	}
}