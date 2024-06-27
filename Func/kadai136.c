#include <stdio.h>
int maxs(int x, int y);
main()
{
	int a, b, max;
	printf("‚Q‚Â‚Ì®”H");
	scanf("%d%d", &a, &b);
	max = maxs(a, b);
	printf("max=%d", max);
}
int maxs(int x, int y) {
	int z;
	if (x > y) {
		z = x;
	}
	else {
		z = y;
	}
		return(z);
}