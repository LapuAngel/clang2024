#include <stdio.h>
char ko(char x);
main()
{
	char a;
	int b;
	printf("アルファベット１文字");
	scanf("%c", &a);
	b = ko(a);
	if (b == 1) {
		printf("戻り値は、%dなので入力した文字は大文字です", b);
	}
	else if (b == 0) {
		printf("戻り値は、%dなので入力した文字は小文字です", b);
	}
}
char ko(char x) {
	int y;
	if (x <= 'z' && x >= 'a') {
		y = 0;
	}
	else if (x <= 'Z' && x >= 'A') {
		y = 1;
	}
	return(y);
}