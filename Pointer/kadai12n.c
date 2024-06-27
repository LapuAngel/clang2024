#include<stdio.h>
main()
{
	char* p = "Nippon";
	char a[10];
	char* pa;
	pa = &a[5];
	while (*pa-- = *p++);
	pa = &a[0];
	while (*pa++) {
		putchar(*pa++);
	}
}