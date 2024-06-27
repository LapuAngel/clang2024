#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a, b, c;
	a = 5;
	b = 3;
	c = a;
	a = b;
	b = c;
	printf("a=%d  b=%d", a, b);
}