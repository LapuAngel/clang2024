#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a[] = { 11,22,33,44,55,66 };
	float b[] = { 11.1,22.2,33.3,44.4 };
	int* pa;
	float* pb;
	int goukei1, count1;
	float	goukei2, count2;
	pa = &a[0];
	printf("�z��a ");
	for (goukei1 = 0, count1 = 0; count1 < 6; count1++) {
		goukei1 += *pa;
		pa++;
	}
	printf("���v��%d\t���ρ�%.3f\n", goukei1, (float)goukei1 / count1);

	pb = &b[0];
	printf("�z��b ");
	for (goukei2 = 0, count2 = 0; count2 < 4; count2++) {
		goukei2 += *pb;
		pb++;
	}
	printf("���v��%.3f\t���ρ�%.3f", (float)goukei2, (float)goukei2 / count2);
}