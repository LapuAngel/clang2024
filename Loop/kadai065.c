#include<stdio.h>
main()
{
	int ia, goukei;
	goukei = 0;
	do{
		printf("�����i-999�ŏI���H�j");
		scanf("%d",& ia);
		goukei += ia;
	} while (ia != -999);
	printf("���v��%d", goukei+999);
}