#include<stdio.h>
main()
{
	int ia;
	printf("10進数の整数？");
	scanf("%d", &ia);
	char ib;
	printf("アルファベット?（ o or h or d)");
	scanf("%*c%c", &ib);
	switch (ib) {
	case 'o':
		printf("%o", ia);
		break;
	case 'h':
		printf("%x", ia);
		break;
	default:
		printf("%d", ia);
	}
}