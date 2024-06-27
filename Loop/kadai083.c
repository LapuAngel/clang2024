#include<stdio.h>
main()
{
	int ia;
	for (ia = 1; ia <= 20; ia++) {
		if (ia % 2 == 0)continue;
		printf("%d ", ia);
	}
}