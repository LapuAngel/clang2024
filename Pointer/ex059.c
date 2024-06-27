#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	char data[15] = "c Language";
	char data2[15];
	char* pdata, * pdata2;
	pdata = &data[0];
	pdata2 = &data2[0];
	printf("data[]=%s\n", pdata);
	while (*pdata2++ = *pdata++);
	pdata2 = &data2[0];
	printf("data2[]=%s\n", pdata2);
	while (*pdata2) {
		putchar(*pdata2++);  //putchar‚Í1•¶Žš•\Ž¦
	}
	putchar('\n');
}