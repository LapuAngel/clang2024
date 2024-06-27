#include <stdio.h>
void ans(int* pa, int* pmax,int *pmin,int number);
main()
{
	int a[] = { 10,25,7,45,2,100,3,70,50 };
	int max, min;
	printf("”z—ñ‚Ì“à—e");
	for (int i = 0; i < 9; i++) {
		printf("%d ", a[i]);
	}
	ans(&a[0], &max, &min, 9);
	printf("\nmax=%d  min=%d", max, min);
}
void ans(int* pa, int* pmax, int* pmin, int number){
	int i;
	*pmax = *pa;
	*pmin = *pa;
	pa++;
	for (i = 0; i < number - 1; pa++, i++) {
		if (*pmax < *pa) {
			*pmax = *pa;
		}
		if (*pmin > *pa) {
			*pmin = *pa;
		}
	}
	return;
}
