#include <stdio.h>
int zyou(int x, int y);
main()
{
	int a, b, c;
	printf("数値１？");
	scanf("%d", &a);
	printf("数値２？");
	scanf("%d", &b);
	c = zyou(a, b);
	printf("%dの%d乗は、%d", a, b, c);
}
int zyou(int x, int y) {
	int z = 1;
	while (y > 0) {
		z *= x;
		y--;
	}
	return(z);
}