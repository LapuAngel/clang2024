#include<stdio.h>
main()
{
	int ia;
	printf("10�i���̐����H");
	scanf("%d", &ia);
	char ib;
	printf("�A���t�@�x�b�g?�i o or h or d)");
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