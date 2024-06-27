#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a = 100;
	int *p_a;
	p_a = &a;
	printf("a=%d\n&a=%d\np_a=%d\n*p_a=%d\n&p_a=%d\n", a, &a, p_a, *p_a, &p_a);
}