#include<stdio.h>
main()
{
	int no1, no2, no3;
	printf("���Z�q����́F");
	scanf("%d", &no1);

	printf("�Q�̐�������́F");
	scanf("%d %d", &no2, &no3);
	
	if (no1 == 1) {
		printf("�v�Z���ʁ@%d", no2 + no3);
	}

	else if (no1 == 2) {
		printf("�v�Z���ʁ@%d", no2 - no3);
	}

	else if (no1 == 3) {
		printf("�v�Z���ʁ@%d", no2 * no3);
	}

	else if (no1 == 4) {
		printf("�v�Z���ʁ@%d", no2 / no3);
		}
}