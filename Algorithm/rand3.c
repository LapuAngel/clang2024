#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int kakuritu;
	srand(time(0));
	rand();
	kakuritu = rand()%100+1;
	if (kakuritu <= 30) {
		printf("%d かいしんのいちげき！",kakuritu);
	}
	else {
		printf("%d 通常攻撃",kakuritu);
	}
}