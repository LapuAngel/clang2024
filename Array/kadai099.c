#include<stdio.h>
main()
{
	char moji[100];
	int ia;
	printf("回数と文字列を入力：");
	scanf("%d %s", &ia, &moji);
	while (ia > 0) {
		printf("%s   ", moji);
		ia--;
	}
}