#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int goukei, k;
	goukei = 0;
	k = 0;
	printf("配列a=");
	for (int ia = 0; ia < 10; ia++) {
		printf("%d ", a[ia]);
		goukei += a[ia];
		k++;
	}
	printf("\n合計＝%d   平均＝%d\n", goukei, goukei / k);
	goukei = 0;
	k = 0;
	printf("配列b=");
	for (int ia = 0; ia < 10; ia++) {
		printf("%d ", b[ia]);
		goukei += b[ia];
		k++;
	}
	printf("\n合計＝%d   平均＝%d\n", goukei, goukei / k);
}