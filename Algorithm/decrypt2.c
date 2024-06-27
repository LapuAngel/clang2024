#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	char s[21];
	int k[20];
	int i, n;
	printf("文字列を入力してください");
	scanf("%s", &s);
	srand(time(0));
	for ( i = 0; s[i] != '\0'; i++) {
		k[i] = rand() % 6;
		s[i] = s[i] - k[i];
		printf("s[%d]の複合化キー：%d\n", i, k[i]);
	}
	printf("複合化済みの文字列は、%s", s);
}