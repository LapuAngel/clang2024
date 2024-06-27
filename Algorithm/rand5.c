#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int ia;
	srand(time(0));
	rand();
	for (int count = 1; count <= 100; count++) {
		ia = rand() % 300 + 1;
		printf("%4d ", ia);
		if (count % 10 == 0) {
			printf("\n");
		}
	}
}