#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int kazu;
	srand(time(0));
	rand();
	kazu = rand()%100;
	printf("•Ï”a‚Í%d‚Å‚·\n", kazu);
}