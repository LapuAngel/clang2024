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
		printf("名前を入力：");
		scanf("%s",(p + i)->name);
		printf("生年月日を空白で区切って入力：");
		scanf("%d%d%d", &(p + i)->birth[0], &(p + i)->birth[1], &(p + i)->birth[2]);
		printf("血液型を入力：");
		scanf("%s", (p + i)->blood);
	}
	for (i = 0; i < 5; i++) {
		if ((p + i)->blood[0] == 'A' || (p + i)->blood[0] == 'a') {
			printf("%sーー%d年%d月%d日生 血液型ー%c型\n", (p + i)->name, (p + i)->birth[0], (p + i)->birth[1], (p + i)->birth[2], (p + i)->blood[0]);
		}
	}
}