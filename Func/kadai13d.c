#include <stdio.h>
void ans( char *pmoji1,char *pmoji2);
main()
{
	char moji1[256] = "�֐�";
	char moji2[] = "�킩�邩�ȁH";
	printf("�z��moji1:%s\n", moji1);
	printf("�z��moji2:%s\n", moji2);
	ans(&moji1[0], &moji2[0]);
	printf("�A�����ꂽ��̕�����moji1�F%s",moji1);
}
void ans(char* pmoji1, char* pmoji2) {
	int i,j;
	for (; *pmoji1 != '\0'; pmoji1++);
	for (; *pmoji2 != '\0'; pmoji2++,pmoji1++) {
		*pmoji1 = *pmoji2;
	}
	*pmoji1 = '\0';
}
