#include<stdio.h>
main()
{
	char* day[] = { "Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday",NULL };
	int i;
	for (i = 0; day[i] != NULL; i++) {
		printf("%s\n", day[i]);
	}
}