#include<stdio.h>
main()
{
	char day[7][10] = { "sunday","monday","tuesday","wednesday","thursday","friday","saturday" };
	for (int ia = 0; ia < 7; ia++) {
			printf("%s", day[ia]);
		printf("\n");
	}
}