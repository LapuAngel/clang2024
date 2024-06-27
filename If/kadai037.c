#include<stdio.h>
main()
{
	int ia;
	printf("0から100までの整数？");
	scanf("%d", &ia);
	if (30 <= ia && ia < 50) {
		printf("その数値の判定結果は「２」です");
	}
	else if (50 <= ia && ia < 80) {
		printf("その数値の判定結果は「３」です");
	}
	else if (80 <= ia && ia < 90) {
		printf("その数値の判定結果は「４」です");
	}
	else if (90 <= ia) {
		printf("その数値の判定結果は「５」です");
	}
	else {
		printf("その数値の判定結果は「１」です");
	}
}