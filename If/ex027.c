#include<stdio.h>
main()
{
	char no1;
	printf("��������́F");
	scanf("%c", &no1);
	
	if ('A' <= no1 && no1 <= 'Z') {
		printf("�ϊ������ %c ", no1 + 0x20);
	}

	else if ('a' <= no1 && no1 <= 'z') {
		printf("�ϊ������ %c ", no1 - 0x20);
	}
	
	else {
		printf("�G���[���b�Z�[�W�F�A���t�@�x�b�g����͂��Ă�������");
	}
}