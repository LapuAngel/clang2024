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
	printf("���O����́F");
	gets(prof.name);
	printf("���N�������󔒂ŋ�؂��ē��́F");
	scanf("%d%d%d", &prof.birth[0], &prof.birth[1], &prof.birth[2]);
	printf("���t�^����́F");
	scanf("%s", &prof.blood);
	printf("%s�[�[%d�N%d��%d���� ���t�^�[%c�^", prof.name, prof.birth[0], prof.birth[1], prof.birth[2], prof.blood[0]);
}