#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int data[10] = { 10,20,30,40,50,60,70,80,-999 };
	int* pdata;
	int i;
	printf("ポインタを固定で表示\n配列 data[]＝");
	pdata = &data[0];
	for (i = 0; (pdata+i) != -999; i++) {
		printf("%d,", *(pdata + i));
	}
	printf("\nポインタを変化させて表示\n配列 data[]＝");
	for (pdata = &data[0]; *pdata != -999; pdata++) {
		printf("%d,", *pdata);
	}
}