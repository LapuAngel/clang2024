#include<stdio.h>
main()
{
	int ia,ib;
	for (; 1;) {
		ia;
		printf("®”‚P(-999‚ÅI—¹)?");
		scanf("%d", &ia);
		if (ia == -999)break;
		if (ia == 0)continue;
		printf("®”‚Q(-999‚ÅI—¹)?");
		scanf("%d", &ib);
		if (ib == -999)break;
		if (ib == 0)continue;
		printf("%d/%d=%d‚ ‚Ü‚è%d\n", ia, ib, ia / ib, ia % ib);
	}
}