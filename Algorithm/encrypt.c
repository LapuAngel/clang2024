#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	char s[50];
	printf("文字列を入力してください");
	scanf("%s", &s);
	for (int i = 0; s[i] != '\0'; i++) {
		s[i] = s[i] + 1;
	}
	printf("暗号化文字列は、%s", s);
}