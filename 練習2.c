#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int kazu;
	srand(time(0));
	rand();
	kazu = rand()%41+10;
	printf("•Ï”b‚Í%d‚Å‚·\n", kazu);
}