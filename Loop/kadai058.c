#include<stdio.h>
main()
{
	int ia = 0;
	for (int ib = 32; ib <= 126; ib++) {
		printf("%x %c ", ib,ib);
		ia++;
		if (ia % 10 == 0) {
			printf("\n");
		}
	}
}