#include<stdio.h>
main()
{
	int ia;
	printf("�����R�[�h�i�|1�œ��͏I���j?");
	scanf("%x", &ia);
	printf("%c\n", ia);
	while (ia != -1) {
		printf("�����R�[�h�i�|1�œ��͏I���j?");
		scanf("%x", &ia);
		if (ia != -1) {
			printf("%c\n", ia);
		}
	}
}