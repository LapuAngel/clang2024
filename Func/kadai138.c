#include <stdio.h>
char ast(void);
main()
{
	char asta;
	int a;
	printf("®”H");
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		asta = ast();
		printf("%c", asta);
	}
}
char ast(void) {
	char astar;
	astar = '*';
	return(astar);
}