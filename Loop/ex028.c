#include<stdio.h>
main()
{
	int no1, no2;
	no1 = 0;
	printf("数を入れて");
	scanf("%d", &no2);
	while (no2 != -999) {
		no1 += no2;
		printf("数を入れて");
		scanf("%d", &no2);
	}
	printf("合計＝%d\n",no1);
}