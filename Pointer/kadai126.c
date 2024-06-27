#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int data[] = { 10,9,1,20,45,21,38,45,88 };
	int* pdata;
	int max , min ;
	printf("data[]");
	pdata = &data[0];
	max = *pdata;
	min = *pdata;
	for (int i = 1; i <= 8; i++) {
		printf("%d ", *pdata++);
		if (*pdata > max) {
			max = *pdata;
		}
		else if (*pdata < min) {
			min = *pdata;
		}
	}
	printf("\nÅ‘å’l%d\nÅ’á’l%d", max, min);
}