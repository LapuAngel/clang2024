#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i, s;
	int d[10];
	while (1) {
		srand(time(0));
		printf("�T���l����́F");
		scanf("%d", &s);
		for (i = 0; i < 10; i++) {
			d[i] = rand() % 30 + 1;
			if (s == d[i]) break;
		}
		if (i == 10) {
			printf("���͂����f�[�^%d�͌�����܂���ł���\n", s);
		}
		else {
			printf("%d�ԖڂɌ�����܂���", i + 1);
			break;
		}
	}
}