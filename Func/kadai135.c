#include <stdio.h>
main()
{
	char a[100];
	int i=0,j;
	printf("������F");
	while ((scanf("%s", &a)) != EOF) {
		while (a[i]) {
			i++;
		}
		for (j = i; j >= 0; j--) {
			printf("%c", a[j]);
		}
		printf("\n������F");
	}
}