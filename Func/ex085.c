#include<stdio.h>
void renketu(char* pa, char* pb);
main()
{
	char a[100], b[100];
	printf("�z��a:");
	gets(a);
	printf("�z��b:");
	gets(b);
	renketu(&a[0], &b[0]);
	printf("�z��a:%s", a);
}
void renketu(char* pa, char* pb) {
	while (*pa != '\0') {
		pa++;
	}
	while (*pb!='\0'){
		*pa = *pb;
		pa++;
		pb++;
	}
}