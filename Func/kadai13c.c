#include <stdio.h>
void ans(int *pa,int *pb);
main()
{
	int a = 10, b = 20;
	printf("関数実行前\na=%d   b=%d", a, b);
	ans(&a, &b);
	printf("\n関数実行後\na=%d   b=%d", a, b);
}
void ans(int* pa, int* pb) {
	int pc;
	pc = *pa;
	*pa = *pb;
	*pb = pc;
	return;
}