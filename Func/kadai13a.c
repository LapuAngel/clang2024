#include <stdio.h>
int zyou(int x, int y);
main()
{
	int a, b, c;
	printf("���l�P�H");
	scanf("%d", &a);
	printf("���l�Q�H");
	scanf("%d", &b);
	c = zyou(a, b);
	printf("%d��%d��́A%d", a, b, c);
}
int zyou(int x, int y) {
	int z = 1;
	while (y > 0) {
		z *= x;
		y--;
	}
	return(z);
}