#include<stdio.h>
main()
{
	int d[] = { 30,7,25,16,10 };
	int i, j, w;
	for (i = 0; i < 5; i++) {
		printf("%3d", d[i]);
	}
	printf("\n");
	for (i = 0; i < 5 - 1; i++) {
		for (j = i + 1; j < 5; j++) {
			if (d[i] > d[j]) {
				w = d[i];
				d[i] = d[j];
				d[j] = w;
			}
		}
	}
	for (i = 0; i < 5; i++) {
		printf("%3d", d[i]);
	}
}