#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int d[11] = { 10,5,30,77,16,3,47,29,37,33 };
	int i,s;
	printf("探索値を入力：");
	scanf("%d", &s);
	i = 0;
	d[10] = s;
	while (d[i] != s) {
		i++;
	}
	if (i == 10) {
		printf("見つからなかった");
	}
	else {
		printf("d[%d]が探索値です", i);
	}
}