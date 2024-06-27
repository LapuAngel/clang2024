#include<stdio.h>
main()
{
	float a[10] = { 0.0,1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9 };
	for (int ia = 0; ia < 10; ia++) {
		printf("a[%d]=%f\n", ia, a[ia]);
	}
}