#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a[3], * p;
	a[0] = 10, a[1] = 20, a[2] = 30;
	p = a;
	printf("*p=%d\n", *p);

	a[0] = 10, a[1] = 20, a[2] = 30;
	p = a;
	printf("*p+1=%d\n", *p + 1);

	a[0] = 10, a[1] = 20, a[2] = 30;
	p = a;
	printf("*(p+1)=%d\n", *(p + 1));

	a[0] = 10, a[1] = 20, a[2] = 30;
	p = a;
	printf("*p+=1=%d\n", *p += 1);
	
	a[0] = 10, a[1] = 20, a[2] = 30;
	p = a;
	printf("*p++=%d\n", *p++);
	
	a[0] = 10, a[1] = 20, a[2] = 30;
	p = a;
	printf("(*p)++=%d\n", (*p)++);
	
	a[0] = 10, a[1] = 20, a[2] = 30;
	p = a;
	printf("*++p=%d\n", *++p);
	
	a[0] = 10, a[1] = 20, a[2] = 30;
	p = a;
	printf("++*p=%d\n", ++ * p);
}
