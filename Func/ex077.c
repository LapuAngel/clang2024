#include<stdio.h>
void maxmin(int x, int y, int z, int* max, int* min);
main()
{
	int a, b, c, max, min;
	printf("整数を３つ入力：");
	scanf("%d%d%d", &a, &b, &c);
	maxmin(a, b, c, &max, &min);
	printf("最大値＝%d 最小値＝%d", max, min);
}

void maxmin(int x, int y, int z, int* max, int* min) {
	*max = x;
	if (y > *max) {
		*max = y;
	}
	if (z > *max) {
		*max = z;
	}

	*min = x;
	if (y < *min) {
		*min = y;
	}
	if (z < *min) {
		*min = z;
	}
}