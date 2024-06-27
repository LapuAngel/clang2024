#include<stdio.h>
main()
{
	char day[7][10] = { "sunday","monday","tuesday","wednesday","thursday","friday","saturday" };
	for (int ia = 0; ia < 7; ia++) {
		for (int ib = 0; ib < 10; ib++) {
			printf("%c", day[ia][ib]);
		}
		printf("\n");
	}
}