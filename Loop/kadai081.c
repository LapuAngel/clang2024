#include<stdio.h>
main()
{
	int ia,ib,goukei;
	ib = 0;
	goukei = 0;
	while (1) {
		printf("�����́H(-999�ŏI��)");
		scanf("%d", &ia);
		if (ia == -999) break;
		ib++;
		goukei += ia;
	}
	printf("���v��%d\n���ρ�%.3f", goukei, (float)goukei / ib);
}