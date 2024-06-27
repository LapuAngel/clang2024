#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int un;
	srand(time(0));
	rand();
	un = rand()%5+1;
	printf("¡“ú‚Ì‚ ‚È‚½‚Ì‰^¨‚Í");
	while (un > 0) {
		printf("™");
		un--;
	}
	printf("‚Å‚·");
}