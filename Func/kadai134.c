#include <stdio.h>
main()
{
	char a[100];
	int i = 0, j;
	printf("文字列：");
	while ((scanf("%s", &a)) != EOF) {
		printf("%s", a);
		printf("\n文字列：");
	}
}