#include<stdio.h>
main()
{
	int no1;
	printf("��������́F");
	scanf("%d", &no1);
	if (10 <= no1 && no1 <= 49) {
		switch (no1/10) {
		case 1:
			printf("10�_��ł�");
			break;
		case 2:
			printf("20�_��ł�");
			break;
		case 3:
			printf("30�_��ł�");
			break;
		case 4:
			printf("40�_��ł�");
			break;
		}
	}
	else {
		printf("���̓G���[");
	}
	
}