#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	char c;
	char* pc;
	printf("�P�������́H");
	scanf("%c", &c);
	pc = &c;
	printf("%c", *pc + 1);
}