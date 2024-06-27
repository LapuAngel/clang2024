#include<stdio.h>
main()
{
	float box[3],goukei;
	int i;
	goukei = 0;
	for (i = 0; i < 3; i++) {
		printf("ŽÀ”‚ð“ü—ÍF");
		scanf("%f", &box[i]);
		goukei += box[i];
	}
	printf("‡Œv‚Í %.2f \n•½‹Ï‚Í %.2f", goukei, goukei / 3);
}