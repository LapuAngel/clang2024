#include <stdio.h>
#define N 8
main()
{
	int d[N] = { 70,60,80,50,40,20,30,10 };
	int i, j;
	int w;
	int gap;
	gap = N / 2;
	printf("ソート前\n");
	for (i = 0; i < N; i++) {
		printf("%d\n", d[i]);
	}

	while (gap > 0) {
		for (i = gap; i < N; i++) {
			for (j = i - gap; j >= 0; j -= gap) {
				if (d[j + gap] >= d[j]) {
					break;
				}
				else {
					w = d[j];
					d[j] = d[j + gap];
					d[j + gap] = w;
				}
			}
		}
		gap = gap / 2;
		printf("----------------------------------\n");
	}

	printf("\nソート後\n");
	for (i = 0; i < N; i++) {
		printf("%d\n", d[i]);
	}
}