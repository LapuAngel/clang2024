#include <stdio.h>
main()
{
	char a[5] = "ringo";
	char b[5];
	char* pa, * pb;
	pa = &a[0];
	printf("”z—ñ“à—e");
	while (*pa) {
		putchar(*pa++);
	}
	pa = &a[4];
	pb = &b[0];
	while (*pb++ = *pa--);
	pb = &b[0];
	printf("\n‹t‡Œ‹‰Ê");
	while (*pb) {
		putchar(*pb++);
	}
}