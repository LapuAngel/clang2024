#include<stdio.h>
main()
{
	int ia, ib;
	printf("整数？");
	scanf("%d", &ia,&ib);
	printf("%d+%d=%d\n%d-%d=%d\n%d*%d=%d\n%d/%d=%dあまり%d", ia, ib, ia + ib, ia, ib, ia - ib, ia, ib, ia * ib, ia, ib, ia / ib, ia % ib);
}