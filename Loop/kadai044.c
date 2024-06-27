#include<stdio.h>
main()
{
	int no1;
	printf("整数（-999で入力終了）");
	scanf("%d", &no1);
	printf("8進数＝%O   16進数＝%X", no1, no1);
	while (no1 != -999) {
		printf("\n整数（-999で入力終了）");
		scanf("%d", &no1);
		printf("8進数＝%O   16進数＝%X", no1, no1);
	}
}