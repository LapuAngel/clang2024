#include <stdio.h>
char ko(char x);
main()
{
	char a;
	int b;
	printf("�A���t�@�x�b�g�P����");
	scanf("%c", &a);
	b = ko(a);
	if (b == 1) {
		printf("�߂�l�́A%d�Ȃ̂œ��͂��������͑啶���ł�", b);
	}
	else if (b == 0) {
		printf("�߂�l�́A%d�Ȃ̂œ��͂��������͏������ł�", b);
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