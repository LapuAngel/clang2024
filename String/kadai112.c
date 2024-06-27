#include<stdio.h>
main()
{
	char moji1[80];
	char moji2[80];
	int i;
	i = 0;
	printf("(コピー先)　配列data1[]＝");
	scanf("%s", &moji1);
	while (moji1[i] != '\0') {
		moji2[i] = moji1[i];
		i++;
	}
	printf("(コピー先)　配列data2[]＝%s", moji2);
}