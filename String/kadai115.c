#include<stdio.h>
main()
{
	char moji[80];
	int i;
	i = 0;
	printf("•¶š—ñ‚ÍH");
	scanf("%s", &moji);
	while (moji[i] != '\0') {
		printf("%c\n", moji[i]);
		i++;
	}
}