#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int d[11] = { 10,15,18,23,28,35,47,55,68,78,96 };
	int low, high, mid, s;
	printf("探索値を入力してください");
	scanf("%d", &s);
	high = 10;
	low = 0;
	while (low <= high) {
		mid = (high + low) / 2;
		if (s > d[mid]) {
			low = mid + 1;
		}
		else if (s < d[mid]) {
			high = mid - 1;
		}
		else {
			break;
		}
	}
	if (low > high) {
		printf("見つかりませんでした");
	}
	else {
		printf("探索値はd[%d]で見つかりました", mid);
	}
}