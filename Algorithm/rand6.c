#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int p, c;
	while (1) {
		srand(time(0));
		rand();
		printf("�����o���܂���?\n(1:�O�[ 2:�`���L 3:�p�[)�F");
		scanf("%d", &p);
		c = rand() % 3 + 1;
		switch (p) {
		case 1:
			printf("\n�v���C���[�́A�O�[�ł��B\n");
			break;
		case 2:
			printf("\n�v���C���[�́A�`���L�ł��B\n");
			break;
		case 3:
			printf("\n�v���C���[�́A�p�[�ł��B\n");
		}
		switch (c) {
		case 1:
			printf("�R���s���[�^�́A�O�[�ł��B\n");
			break;
		case 2:
			printf("�R���s���[�^�́A�`���L�ł��B\n");
			break;
		case 3:
			printf("�R���s���[�^�́A�p�[�ł��B\n");
		}
		if (p == 1 && c == 2 || p == 2 && c == 3 || p == 3 && c == 1) {
			printf("\n�v���C���[�̏����ł�");
			break;
		}
		else if (p == 1 && c == 3 || p == 2 && c == 1 || p == 3 && c == 2) {
			printf("\n�v���C���[�̕����ł�");
			break;
		}
		else {
			printf("\n�������ł�\n\n");
		}
	}
}