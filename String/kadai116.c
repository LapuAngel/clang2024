#include <stdio.h>
main()
{
	char a[30], b[30];
	int i = 0, j = 0;
	printf("������P�H");
	scanf("%s", &a);
	printf("������Q�H");
	scanf("%s", &b);
	while (a[i] != '\0') {
		i++;
	}
	while (a[i] = b[j]) {
		i++;
		j++;
	}
	printf("%s", a);
}