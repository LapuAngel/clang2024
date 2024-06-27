#include<stdio.h>
main()
{
	int ia, ib;
	char ic;
	printf("‰‰Zq:");
	scanf("%c", &ic);
	printf("®”1:");
	scanf("%d", &ia);
	printf("®”2:");
	scanf("%d", &ib);
	switch(ic){
	case'+':
		printf("%d+%d=%d", ia, ib, ia + ib);
		break;
	case'-':
		printf("%d-%d=%d", ia, ib, ia - ib);
		break;
	case'*':
		printf("%d*%d=%d", ia, ib, ia * ib);
		break;
	case'/':
		printf("%d/%d=%d", ia, ib, ia / ib);
		break;
	default:
		printf("‚»‚Ì‘¼");
	}
}