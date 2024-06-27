#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	char data[10] = "Orange";
	char* pdata;
	char* p = "Apple";
	pdata = &data[0];
	printf("data[]=");
	while (*pdata) {
		putchar(*pdata++);
	}
	printf("\n*p=");
	while (*p) {
		putchar(*p++);
	}
	putchar('\n');
}
