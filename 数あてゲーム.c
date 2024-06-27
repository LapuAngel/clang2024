#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int kazu, ia, count;
	count = 0;
	srand(time(0));
	kazu = rand() % 100 + 1;
	printf("”‚ ‚ÄƒQ[ƒ€\n");
	while (1) {
		printf("‚P`‚P‚O‚O‚Ì”‚ğ“ü—Í");
		scanf("%d", &ia);
		count++;
		if (ia < kazu ) {
			printf("%d‚æ‚è‘å‚«‚¢\n\n",ia);
		}
		else if (ia > kazu) {
			printf("%d‚æ‚è¬‚³‚¢\n\n",ia);
		}
		else {
			printf("\n\n‚¨‚ß‚Å‚Æ‚¤³‰ğ‚Í%d‚Å‚·\n%d‰ñ‚Å³‰ğ‚µ‚Ü‚µ‚½", kazu, count);
			break;
		}
	}
}