#include<stdio.h>
main()
{
	int c[100];
	int ia,count;
	count = 0;
	do {
		printf("����(-999�ŏI��)?");
		scanf("%d", &ia);
		if (ia == -999)break;
		c[count] = ia;
		count++;
	} while (1);
	printf("�z��c=");
	for (int ib = 0; ib < count; ib++) {
		printf("%d ", c[ib]);
		}
}