#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	char s[21];
	int k[20];
	int i, n;
	printf("���������͂��Ă�������");
	scanf("%s", &s);
	srand(time(0));
	for ( i = 0; s[i] != '\0'; i++) {
		k[i] = rand() % 6;
		s[i] = s[i] - k[i];
		printf("s[%d]�̕������L�[�F%d\n", i, k[i]);
	}
	printf("�������ς݂̕�����́A%s", s);
}