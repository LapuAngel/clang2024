#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int c[10];
	printf("�z��a=");
	for (int ia = 0; ia < 10; ia++) {
		printf("%d ", a[ia]);
	}
	printf("\n");
	printf("�z��c=");
	for (int ia = 0; ia < 10; ia++) {
		c[ia] = a[ia];
		printf("%d ", c[ia]);
	}
}