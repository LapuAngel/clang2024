#include<stdio.h>
void hyouji(char moji);
main()
{
	int c;
	char dumy[256];
	printf("�����i�OZ�ŏI���j");
	c = getchar();
	while (c != EOF) {
		hyouji(c);
		gets(dumy);
		printf("�����i�OZ�ŏI���j");
		c = getchar();
	}
}
void hyouji(char moji) {
	putchar(moji);
	putchar('\n');
}