#include<stdio.h>
main()
{
	int no1;
	printf("�����i-999�œ��͏I���j");
	scanf("%d", &no1);
	printf("8�i����%O   16�i����%X", no1, no1);
	while (no1 != -999) {
		printf("\n�����i-999�œ��͏I���j");
		scanf("%d", &no1);
		printf("8�i����%O   16�i����%X", no1, no1);
	}
}