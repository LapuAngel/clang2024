#include<stdio.h>
main()
{
	char moji[100];
	int ia;
	printf("�񐔂ƕ��������́F");
	scanf("%d %s", &ia, &moji);
	while (ia > 0) {
		printf("%s   ", moji);
		ia--;
	}
}