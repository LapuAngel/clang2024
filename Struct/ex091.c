#include<stdio.h>
#include<string.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};
main()
{
	struct profile prof;
	struct profile* p = &prof;
	printf("名前を入力：");
	gets(p->name);
	printf("生年月日を空白で区切って入力：");
	scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
	printf("血液型を入力：");
	scanf("%s", p->blood);
	printf("%sーー%d年%d月%d日生 血液型ー%c型", p->name, p->birth[0], p->birth[1], p->birth[2], p->blood[0]);
}