#include<stdio.h>
main()
{
	int no1, no2;
	printf("整数を２つ入れて");
	scanf("%d %d", &no1, &no2);
	printf("２倍すると%d.%d", no1 * 2, no2 * 2);
	printf("３倍すると%d.%d", no1 * 3, no2 * 3);

}