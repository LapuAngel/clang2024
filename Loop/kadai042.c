#include<stdio.h>
main()
{
	int no1, no2,no3;
	no1 = 0;
	no3 = 0;
	printf("��������");
	scanf("%d", &no2);
	while (no1 < 300) {
		no1 += no2;
		no3++;
		printf("��������");
		scanf("%d", &no2);
	}
	printf("���v��%d\n", no1);
}