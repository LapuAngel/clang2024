#include<stdio.h>
#include<string.h>
void zyun1(int* pa);
void zyun2(int* pa);
main()
{
	int a[] = { 10,25,7,45,2,100,3,70,50 }, i, j;
	printf("�\�[�g���@�i0:���� 1:�~���j");
	scanf("%d", &i);
	printf("�\�[�g�O\n");
	for (j = 0; j < 9; j++) {
		printf("%d ", a[j]);
	}
	if (i == 0) {
		zyun1(&a[0]);
	}
	else if (i == 1) {
		zyun2(&a[0]);
	}
	printf("\n�\�[�g��\n");
	for (j = 0; j < 9; j++) {
		printf("%d ", a[j]);
	}
}
void zyun1(int* pa) {
	int i, j, b;
	for (i = 0; i < 8; i++) {
		for (j = i + 1; j < 9; j++) {
			if (*(pa + i) < *(pa + j)) {
				b = *(pa + j);
				*(pa + j) = *(pa + i);
				*(pa + i) = b;
			}
		}
	}
}
void zyun2(int* pa) {
	int i, j, b;
	for (i = 0; i < 8; i++) {
		for (j = i + 1; j < 9; j++) {
			if (*(pa + i) > *(pa + j)) {
				b = *(pa + j);
				*(pa + j) = *(pa + i);
				*(pa + i) = b;
			}
		}
	}
}