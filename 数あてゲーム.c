#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int kazu, ia, count;
	count = 0;
	srand(time(0));
	kazu = rand() % 100 + 1;
	printf("数あてゲーム\n");
	while (1) {
		printf("１〜１００の数を入力");
		scanf("%d", &ia);
		count++;
		if (ia < kazu ) {
			printf("%dより大きい\n\n",ia);
		}
		else if (ia > kazu) {
			printf("%dより小さい\n\n",ia);
		}
		else {
			printf("\n\nおめでとう正解は%dです\n%d回で正解しました", kazu, count);
			break;
		}
	}
}