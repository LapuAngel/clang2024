#include<stdio.h>
main()
{
	int no1, no2,no3;
	no1 = 0;
	no3 = 0;
	printf("数を入れて");
	scanf("%d", &no2);
	while (no2 != -999) {
		no1 += no2;
		no3++;
		printf("数を入れて");
		scanf("%d", &no2);
	}
	printf("合計＝%d\n平均＝%.2f", no1,(float)no1/no3);
}