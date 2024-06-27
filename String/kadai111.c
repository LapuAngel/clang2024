#include<stdio.h>
main()
{
	char moji1[80];
	int i;
	i = 0;
	printf("•¶š—ñ‚ÍH");
	scanf("%s", &moji1);
	while (moji1[i] != '\0') {
		printf("%c", moji1[i]);
		i++;
	}
}