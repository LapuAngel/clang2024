#include<stdio.h>
main()
{
	int no1, no2,no3;
	no1 = 0;
	no3 = 0;
	printf("数を入れて");
	scanf("%d", &no2);
	while (no1 < 300) {
		no1 += no2;
		no3++;
		printf("数を入れて");
		scanf("%d", &no2);
	}
	printf("合計＝%d\n", no1);
}