#include <stdio.h>
void ans(int *pa,int *pb);
main()
{
	int a = 10, b = 20;
	printf("ŠÖ”Às‘O\na=%d   b=%d", a, b);
	ans(&a, &b);
	printf("\nŠÖ”ÀsŒã\na=%d   b=%d", a, b);
}
void ans(int* pa, int* pb) {
	int pc;
	pc = *pa;
	*pa = *pb;
	*pb = pc;
	return;
}