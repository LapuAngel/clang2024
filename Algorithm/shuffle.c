#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i,target,work,data[20];
	for (i = 0; i < 20; i++) {
		data[i] = i + 1;
	}
	srand(time(0));
	for (i = 0; i < 20; i++) {
		target = rand() % 20;
		work = data[i];
		data[i] = data[target];
		data[target] = work;
		printf("data[%2d] = %2d\n", i, data[i]);
	}
	printf("\n");
	for (i = 0; i < 20; i++) {
		printf("data[%2d] = %2d\n", i, data[i]);
	}
}