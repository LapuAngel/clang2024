#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int d[11] = { 10,15,18,23,28,35,47,55,68,78,96 };
	int low, high, mid, s;
	printf("’Tõ’l‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	scanf("%d", &s);
	high = 10;
	low = 0;
	while (low <= high) {
		mid = (high + low) / 2;
		if (s > d[mid]) {
			low = mid + 1;
		}
		else if (s < d[mid]) {
			high = mid - 1;
		}
		else {
			break;
		}
	}
	if (low > high) {
		printf("Œ©‚Â‚©‚è‚Ü‚¹‚ñ‚Å‚µ‚½");
	}
	else {
		printf("’Tõ’l‚Íd[%d]‚ÅŒ©‚Â‚©‚è‚Ü‚µ‚½", mid);
	}
}