#include<stdio.h>
main()
{
	int no1;
	printf("������́F");
	scanf("%d", & no1);

	if (no1 == 2) {
		printf("�ŏI���� 28 ���������� 29 ���ł�");
	}

	else if (no1 == 4 || no1 == 6 || no1 == 9 || no1 == 11) {
		printf("�ŏI���� 30 ���ł�");
	}

	else{
		printf("�ŏI���� 31 ���ł�");
	}
}