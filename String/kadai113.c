#include<stdio.h>
main()
{
	char moji[] = "GameSoft";
	int i;
	i = 0;
	while (moji[i] != '\0') {
		i++;
	}
	printf("������F%s\n", moji);
	printf("�������� %d ���� ", i);
}