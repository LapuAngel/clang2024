#include<stdio.h>
main()
{
	int no1;
	printf("�b������́F");
	scanf("%d", &no1);
	if (no1 < 0) {
		printf("�O�ȏ�̐��l����͂��Ă�������");
	}
	if (no1 <= 5000) {
		printf("%d����%d��%d�b�ł�", no1 / 3600, (no1 % 3600) / 60, (no1 % 3600) % 60);
	}
	else {
		printf("�G���[���b�Z�[�W5000�ȉ��̐��l����͂��Ă�������\n");
	}
}