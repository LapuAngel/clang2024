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
	printf("���O����́F");
	gets(p->name);
	printf("���N�������󔒂ŋ�؂��ē��́F");
	scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
	printf("���t�^����́F");
	scanf("%s", p->blood);
	printf("%s�[�[%d�N%d��%d���� ���t�^�[%c�^", p->name, p->birth[0], p->birth[1], p->birth[2], p->blood[0]);
}