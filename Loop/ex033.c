#include<stdio.h>
main()
{
	int i,goukei;
	goukei = 0;
	i = 0;
	for (; i != -999;) {
		goukei += i;
		printf("���́H");
		scanf("%d", &i);
	}
	printf("���v��%d", goukei);
}