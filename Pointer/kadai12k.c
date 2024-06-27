#include<stdio.h>
main()
{
	char a[] = "mikan to ringo";
	char* pa;
	pa = &a[0];
	while (*pa) {
		if (*pa != ' ') {
			putchar(*pa);
		}
		pa++;
	}
}