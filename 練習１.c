#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int kazu;
	srand(time(0));
	rand();
	kazu = rand()%100;
	printf("�ϐ�a��%d�ł�\n", kazu);
}