#include<stdio.h>
main()
{
	int no1;
	for(no1=1;no1<=60;no1++){
		printf("%3d", no1);
		if (no1 % 20 == 0) {
			printf("\n");
		}
	}
}