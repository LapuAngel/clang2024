#include<stdio.h>
main()
{
	char moji[] = "Apple";
	int i;
	printf("�P�������\��\n");
	for (i=0; moji[i] != '\0'; i++) {
		printf("%c",moji[i]);
	}
	printf("\n");
	printf("������ŕ\��\n%s", moji);

}