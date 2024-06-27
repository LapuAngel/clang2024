#include<stdio.h>
main()
{
	int ia;
	printf("整数？");
	scanf("%d", &ia);
	if (ia<0) {
		printf("その数は「マイナス」です");
	}
	else {
		printf("その数は「プラス」です");
	}
}