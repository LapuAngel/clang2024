#include<stdio.h>
main()
{
	int ia, goukei;
	ia = 0;
	goukei = 0;
	do{
		ia++;
		goukei += ia;
		printf("%d", ia);
		if (goukei <= 300) {
			printf("+");
		}
	} while (goukei <= 300);
	printf("%d", goukei);
}