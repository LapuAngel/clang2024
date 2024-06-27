#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	char s[50];
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	scanf("%s", &s);
	for (int i = 0; s[i] != '\0'; i++) {
		s[i] = s[i] + 1;
	}
	printf("ˆÃ†‰»•¶š—ñ‚ÍA%s", s);
}