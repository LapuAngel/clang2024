#include<stdio.h>
main()
{
	int ia;
	ia = 20;
	do {
		printf("%3d", ia);
		if (ia == 11) {
			printf("\n");
		}
		ia--;
	} while (ia > 0);
}