#include<stdio.h>
main()
{
	float box[3],goukei;
	int i;
	goukei = 0;
	for (i = 0; i < 3; i++) {
		printf("実数を入力：");
		scanf("%f", &box[i]);
		goukei += box[i];
	}
	printf("合計は %.2f \n平均は %.2f", goukei, goukei / 3);
}