#include <stdio.h>
char ast(char x);
main()
{
	char moji,hyouzi;
	int a;
	printf("•¶šH");
	scanf("%c", &moji);
	printf("®”H");
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		hyouzi = ast(moji);
		printf("%c", hyouzi);
	}
}
char ast(x) {
	char astar;
	astar = x;
	return(astar);
}