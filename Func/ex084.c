#include <stdio.h>
void strcnt(char* pa, char* pb);
main()
{
	char str1[256], str2[256];
	int i;
	printf("•¶Žš—ñHF");
	gets(str1);
	printf("str1F");
	strcnt(str1, str2);
	printf("str1:%s\nstr2:%s", str1, str2);
}
void strcnt(char* pa, char* pb) {
	int i, j;
	for (i = 0; *(pa + i) != '\0'; i++);
	i--;
	for (j = 0; i >= 0; i--, j++) {
		*(pb + j) = *(pa + i);
	}
	*(pb + j) = '\0';
}
