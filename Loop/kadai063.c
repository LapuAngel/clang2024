#include<stdio.h>
main()
{
	int ia;
	ia = 0;
	while (ia < 20) {
		ia++;
		printf("%3d", ia);
		if (ia % 10 == 0) {
			printf("\n");
		}
	}
}