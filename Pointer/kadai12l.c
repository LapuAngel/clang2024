#include <stdio.h>
main()
{
	char a[30];
	char* pa;
	int i;
	pa = &a[0];
	printf("•¶š—ñH");
	gets(pa);
	for (i = 0; *pa != '\0'; i++, pa++);
	printf("\n•¶š”‚ÍA%d•¶š‚Å‚·",i);
}