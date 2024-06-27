#include<stdio.h>
main()
{
	int no1, no2, no3;//もう一つ作って合計として使ってもよい
	printf("整数を3個入力：");
	scanf("%d %d %d", &no1, &no2, &no3);//scanfには&を必ずつける
	printf("合計＝%d   平均＝%.2f", no1 + no2 + no3, (float)(no1 + no2 + no3) / 3);//割る3.0でやってもよい
//(float)はキャストというこれをつけるとfloatになる
}