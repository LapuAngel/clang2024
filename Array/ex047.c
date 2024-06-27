#include<stdio.h>
main()
{
	float x[][2] = { {0,0},{0,0},{0,0} };
	float gokei;
	int i, j;
	for (i = 0; i <= 2; i++) {
		for (j = 0, gokei = 0; j <= 1; j++) {
			printf("x[%d][%d]",i,j);
			scanf("%f", &x[i][j]);
			gokei += x[i][j];
		}
		printf("%ds–Ú‚Ì•½‹Ï%.2f\n\n", i, gokei/j);
	}
}