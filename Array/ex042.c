#include<stdio.h>
main()
{
	char moji[] = "Apple";
	int i;
	printf("１文字ずつ表示\n");
	for (i=0; moji[i] != '\0'; i++) {
		printf("%c",moji[i]);
	}
	printf("\n");
	printf("文字列で表示\n%s", moji);

}