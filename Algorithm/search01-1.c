#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i, s;
	int d[10];
	while (1) {
		srand(time(0));
		printf("探索値を入力：");
		scanf("%d", &s);
		for (i = 0; i < 10; i++) {
			d[i] = rand() % 30 + 1;
			if (s == d[i]) break;
		}
		if (i == 10) {
			printf("入力したデータ%dは見つかりませんでした\n", s);
		}
		else {
			printf("%d番目に見つかりました", i + 1);
			break;
		}
	}
}