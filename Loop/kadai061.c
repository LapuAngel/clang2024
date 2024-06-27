#include<stdio.h>
main()
{
	int ia;
	ia = 1;
	do {
		printf("%3d", ia);
		if (ia % 10 == 0) {
			printf("\n");
		}
		ia++;
	} while (ia <= 20);
}