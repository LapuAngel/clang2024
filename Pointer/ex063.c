#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	char* pride[3] = { "car","bus","shinkansen" };
	for (int i = 0; i < 3; i++) {
		printf("%s\n", pride[i]);
	}
}
