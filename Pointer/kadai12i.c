#include <stdio.h>
main()
{
	char a[5] = "mikan";
	char b[5];
	char* pa, * pb;
	pa = &a[0];
	pb = &b[0];
	while (*pb++ = *pa++);
	pb = &b[0];
	while (*pb) {
		putchar(*pb++);
	}
}