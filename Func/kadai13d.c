#include <stdio.h>
void ans( char *pmoji1,char *pmoji2);
main()
{
	char moji1[256] = "関数";
	char moji2[] = "わかるかな？";
	printf("配列moji1:%s\n", moji1);
	printf("配列moji2:%s\n", moji2);
	ans(&moji1[0], &moji2[0]);
	printf("連結された後の文字列moji1：%s",moji1);
}
void ans(char* pmoji1, char* pmoji2) {
	int i,j;
	for (; *pmoji1 != '\0'; pmoji1++);
	for (; *pmoji2 != '\0'; pmoji2++,pmoji1++) {
		*pmoji1 = *pmoji2;
	}
	*pmoji1 = '\0';
}
