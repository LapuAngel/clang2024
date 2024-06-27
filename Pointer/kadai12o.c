#include<stdio.h>
main()
{
	char* p = "pointer test program";
	char save[256];
	char* psave;
	psave = save;
	while (*psave++ = *p++);
	psave = &save[0];
	printf("”z—ñ@save[]=")
	while (*psave) {
		putchar(*psave++);
	}
}