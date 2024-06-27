#include<stdio.h>
main()
{
	int ia,ib;
	printf("®”1H");
	scanf("%d", &ia);
	printf("®”2H");
	scanf("%d", &ib);
	if (ia<ib) {
		printf("%d‚Ì‚Ù‚¤‚ª%d‚æ‚è%d¬‚³‚¢", ia, ib, ia - ib);
	}
	else if (ib < ia) {
		printf("%d‚Ì‚Ù‚¤‚ª%d‚æ‚è%d¬‚³‚¢", ib, ia, ib - ia);
	}
}