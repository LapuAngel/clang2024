#include<stdio.h>
#include<string.h>

#define CNT 4

main()
{
	char* ptbl[] = { "Programming2","Algorithm","Programming1","C" }, * w;
	int i, j;

	for (i = 0; i < CNT - 1; i++) {
		for (j = i + 1; j < CNT; j++) {
			if (strcmp(ptbl[i], ptbl[j]) > 0) {
				w = ptbl[i];
				ptbl[i] = ptbl[j];
				ptbl[j] = w;
			}
		}
	}
	for (i = 0; i < CNT; i++) {
		printf("%s\n", ptbl[i]);
	}
}
