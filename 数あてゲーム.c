#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int kazu, ia, count;
	count = 0;
	srand(time(0));
	kazu = rand() % 100 + 1;
	printf("�����ăQ�[��\n");
	while (1) {
		printf("�P�`�P�O�O�̐������");
		scanf("%d", &ia);
		count++;
		if (ia < kazu ) {
			printf("%d���傫��\n\n",ia);
		}
		else if (ia > kazu) {
			printf("%d��菬����\n\n",ia);
		}
		else {
			printf("\n\n���߂łƂ�������%d�ł�\n%d��Ő������܂���", kazu, count);
			break;
		}
	}
}