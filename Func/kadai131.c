#include<stdio.h>
void hyouji(char moji);
main()
{
	int c;
	char dumy[256];
	printf("文字（＾Zで終了）");
	c = getchar();
	while (c != EOF) {
		hyouji(c);
		gets(dumy);
		printf("文字（＾Zで終了）");
		c = getchar();
	}
}
void hyouji(char moji) {
	putchar(moji);
	putchar('\n');
}