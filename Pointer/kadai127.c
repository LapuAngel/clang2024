#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	double data[] = { 10.8,20.3,30.6,40.4,50.5 };
	double goukei, i, * pdata;
	pdata = &data[0];
	goukei = 0;
	printf("”z—ñ data[]");
	for (i = 0; i < 5; i++) {
		printf("%f ", *pdata);
		goukei += *pdata;
		pdata++;
	}
	printf("\n‡Œv%.3f\n•½‹Ï%.3f", goukei, goukei / i);
}