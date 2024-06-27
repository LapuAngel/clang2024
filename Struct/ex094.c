#include<stdio.h>
#include<string.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};
main()
{
	struct profile prof[5];
	struct profile* p;
	int i;
	p = &prof[0];
	for (i = 0; i < 5; i++) {
		printf("–¼‘O‚ð“ü—ÍF");
		scanf("%s",(p + i)->name);
		printf("¶”NŒŽ“ú‚ð‹ó”’‚Å‹æØ‚Á‚Ä“ü—ÍF");
		scanf("%d%d%d", &(p + i)->birth[0], &(p + i)->birth[1], &(p + i)->birth[2]);
		printf("ŒŒ‰tŒ^‚ð“ü—ÍF");
		scanf("%s", (p + i)->blood);
	}
	for (i = 0; i < 5; i++) {
		if ((p + i)->blood[0] == 'A' || (p + i)->blood[0] == 'a') {
			printf("%s[[%d”N%dŒŽ%d“ú¶ ŒŒ‰tŒ^[%cŒ^\n", (p + i)->name, (p + i)->birth[0], (p + i)->birth[1], (p + i)->birth[2], (p + i)->blood[0]);
		}
	}
}