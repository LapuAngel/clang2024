#include <stdio.h>
main()
{
	int c;
	char dumy[256];

	c = getchar();
	while (c != EOF) {
		putchar(c);
		putchar('\n');
		gets(dumy);  //gets�͓��̓o�b�t�@�Ɏc�������̂����鎞�c�������̂������Ƃ�@����ȊO�ł�%s��scanf�̕ς��
		c = getchar();
	}
}