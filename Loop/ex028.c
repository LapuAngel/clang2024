#include<stdio.h>
main()
{
	int no1, no2;
	no1 = 0;
	printf("��������");
	scanf("%d", &no2);
	while (no2 != -999) {
		no1 += no2;
		printf("��������");
		scanf("%d", &no2);
	}
	printf("���v��%d\n",no1);
}