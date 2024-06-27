#include<stdio.h>
main()
{
	int no1, no2, no3;
	printf("演算子を入力：");
	scanf("%d", &no1);

	printf("２つの整数を入力：");
	scanf("%d %d", &no2, &no3);
	
	if (no1 == 1) {
		printf("計算結果　%d", no2 + no3);
	}

	else if (no1 == 2) {
		printf("計算結果　%d", no2 - no3);
	}

	else if (no1 == 3) {
		printf("計算結果　%d", no2 * no3);
	}

	else if (no1 == 4) {
		printf("計算結果　%d", no2 / no3);
		}
}