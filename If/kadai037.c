#include<stdio.h>
main()
{
	int ia;
	printf("0����100�܂ł̐����H");
	scanf("%d", &ia);
	if (30 <= ia && ia < 50) {
		printf("���̐��l�̔��茋�ʂ́u�Q�v�ł�");
	}
	else if (50 <= ia && ia < 80) {
		printf("���̐��l�̔��茋�ʂ́u�R�v�ł�");
	}
	else if (80 <= ia && ia < 90) {
		printf("���̐��l�̔��茋�ʂ́u�S�v�ł�");
	}
	else if (90 <= ia) {
		printf("���̐��l�̔��茋�ʂ́u�T�v�ł�");
	}
	else {
		printf("���̐��l�̔��茋�ʂ́u�P�v�ł�");
	}
}