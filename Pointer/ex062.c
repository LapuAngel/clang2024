#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	char* p = "peach";
	char data1[10] = "banana", * pdata1;
	char data2[10], * pdata2;
	pdata1 = &data1[0];
	pdata2 = &data2[0];
	while (*pdata2++ = *pdata1++);
	pdata1 = &data1[0];
	while (*pdata1++ = *p++);
	pdata1 = &data1[0];
	pdata2 = &data2[0];
	printf("data1[]=");
	while (*pdata1) {
		putchar(*pdata1++);
	}
	printf("\ndata2[]=");
	while (*pdata2) {
		putchar(*pdata2++);
	}
	
}
