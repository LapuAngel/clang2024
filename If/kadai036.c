#include<stdio.h>
main()
{
	int ia,ib;
	printf("整数1？");
	scanf("%d", &ia);
	printf("整数2？");
	scanf("%d", &ib);
	if (ia<ib) {
		printf("%dのほうが%dより%d小さい", ia, ib, ia - ib);
	}
	else if (ib < ia) {
		printf("%dのほうが%dより%d小さい", ib, ia, ib - ia);
	}
}