#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int data[10] = { 10,20,30,40,50,60,70,80,-999 };
	int* pdata;
	int i;
	printf("�|�C���^���Œ�ŕ\��\n�z�� data[]��");
	pdata = &data[0];
	for (i = 0; (pdata+i) != -999; i++) {
		printf("%d,", *(pdata + i));
	}
	printf("\n�|�C���^��ω������ĕ\��\n�z�� data[]��");
	for (pdata = &data[0]; *pdata != -999; pdata++) {
		printf("%d,", *pdata);
	}
}