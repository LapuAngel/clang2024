#include<stdio.h>
main()
{
	float box[3],goukei;
	int i;
	goukei = 0;
	for (i = 0; i < 3; i++) {
		printf("��������́F");
		scanf("%f", &box[i]);
		goukei += box[i];
	}
	printf("���v�� %.2f \n���ς� %.2f", goukei, goukei / 3);
}