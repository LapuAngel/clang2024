#include<stdio.h>
main()
{
	int ia;
	printf("整数？");
	scanf("%d",& ia);
	if (ia % 2 == 0) {
		printf("その数は「偶数」です");
	}
	else if (ia % 2 == 1) {
		printf("その数は「奇数」です");
	}
}