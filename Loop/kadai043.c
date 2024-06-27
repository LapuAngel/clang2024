#include<stdio.h>
main()
{
	int ia;
	printf("文字コード（－1で入力終了）?");
	scanf("%x", &ia);
	printf("%c\n", ia);
	while (ia != -1) {
		printf("文字コード（－1で入力終了）?");
		scanf("%x", &ia);
		if (ia != -1) {
			printf("%c\n", ia);
		}
	}
}