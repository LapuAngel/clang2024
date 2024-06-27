#include<stdio.h>
main()
{
	char no1;
	printf("アルファベット小文字？");
	scanf("%c",& no1);
	for (; no1 <= 'z'; no1++) {
		printf("%c",no1);
	}
}