#include <stdio.h>
main()
{
	int a = 0, goukei = 0, count = 0;

	printf("整数(＾Zで終了)？");
	while ((scanf("%d", &a)) != EOF) {
		goukei += a;
		count++;
		printf("整数(＾Zで終了)？");
	}
	printf("合計＝%d   平均＝%.2f\n", goukei, (float)goukei / count);
}