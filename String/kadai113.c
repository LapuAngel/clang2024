#include<stdio.h>
main()
{
	char moji[] = "GameSoft";
	int i;
	i = 0;
	while (moji[i] != '\0') {
		i++;
	}
	printf("文字列：%s\n", moji);
	printf("文字数は %d 文字 ", i);
}