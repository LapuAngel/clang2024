#include <stdio.h>
main()
{
	char str1[128], str2[128];
	char* pstr1, * pstr2;
	printf("•¶š—ñ‚PH");
	scanf("%s", str1);
	printf("•¶š—ñ‚QH");
	scanf("%s", str2);
	pstr1 = str1;
	pstr2 = str2;
	while (*pstr1++);
	pstr1--;
	while (*pstr1++ = *pstr2++);
	printf("str1:%s", str1);
}