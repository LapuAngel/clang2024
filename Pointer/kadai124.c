#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	char c;
	char* pc;
	printf("１文字入力？");
	scanf("%c", &c);
	pc = &c;
	printf("%c", *pc + 1);
}