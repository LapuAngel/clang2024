#include <stdio.h>
main()
{
	char a[30];
	char* pa;
	int i;
	pa = &a[0];
	printf("文字列？");
	gets(pa);
	for (i = 0; *pa != '\0'; i++, pa++);
	printf("\n文字数は、%d文字です",i);
}