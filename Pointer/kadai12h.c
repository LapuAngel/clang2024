#include<stdio.h>
main()
{
	char a[] = "kadai12h.c";
	char* pa;
	pa = &a[0];
	while (*pa) {
		printf("%c", *pa++);
	}
}
