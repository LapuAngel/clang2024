#include<stdio.h>
main()
{
	float ia, ib;
	printf("2つの実数？");
	scanf("%f %f", &ia, &ib);
	if (ia < ib) {
		printf("大きいほうは%f", ib);
	}
	else {
		printf("大きいほうは%f", ia);
	}
}