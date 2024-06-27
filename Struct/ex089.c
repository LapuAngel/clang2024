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
	printf("名前を入力：");
	gets(prof.name);
	printf("生年月日を空白で区切って入力：");
	scanf("%d%d%d", &prof.birth[0], &prof.birth[1], &prof.birth[2]);
	printf("血液型を入力：");
	scanf("%s", &prof.blood);
	printf("%sーー%d年%d月%d日生 血液型ー%c型", prof.name, prof.birth[0], prof.birth[1], prof.birth[2], prof.blood[0]);
}