#include<stdio.h>
main()
{
	int ia,ib;
	printf("����1�H");
	scanf("%d", &ia);
	printf("����2�H");
	scanf("%d", &ib);
	if (ia<ib) {
		printf("%d�̂ق���%d���%d������", ia, ib, ia - ib);
	}
	else if (ib < ia) {
		printf("%d�̂ق���%d���%d������", ib, ia, ib - ia);
	}
}