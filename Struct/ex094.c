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
		printf("���O����́F");
		scanf("%s",(p + i)->name);
		printf("���N�������󔒂ŋ�؂��ē��́F");
		scanf("%d%d%d", &(p + i)->birth[0], &(p + i)->birth[1], &(p + i)->birth[2]);
		printf("���t�^����́F");
		scanf("%s", (p + i)->blood);
	}
	for (i = 0; i < 5; i++) {
		if ((p + i)->blood[0] == 'A' || (p + i)->blood[0] == 'a') {
			printf("%s�[�[%d�N%d��%d���� ���t�^�[%c�^\n", (p + i)->name, (p + i)->birth[0], (p + i)->birth[1], (p + i)->birth[2], (p + i)->blood[0]);
		}
	}
}