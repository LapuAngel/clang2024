#include<stdio.h>
#include<string.h>
struct animal {
	int no;
	char name[20];
	char color[10];
};
main()
{
	struct animal data[50] = { {30,"dog","white"},{50,"tiger","yellow"},{60,"horse","brown"} };
	struct animal* p_data;
	p_data = &data[0];
	char moji, namae[50], iro[50];
	char damy[1000];
	int i, bangou;

	while (1) {
		p_data = &data[0];
		printf("�������j���[�iX�̓��͂ŏI�����܂��j\n");
		printf("1:�f�[�^�\��\t2:�f�[�^�ǉ�\t3:�f�[�^����\t�����́H");
		moji = getchar();
		gets(damy);
		if (moji == '1') {
			while (p_data->no != 0) {
				printf("�ԍ��F%d\t���O�F%s\t�F�F%s\n", p_data->no,
					p_data->name, p_data->color);
				p_data++;
			}
		}
		else if (moji == '2') {
			while (p_data->no != 0) {
				p_data++;
			}
			printf("�f�[�^�̒ǉ����s���܂��̂œ��͂��Ă��������B\n");
			printf("�ԍ�>");
			scanf("%d", &p_data->no);
			printf("���O>");
			scanf("%s", p_data->name);
			printf("�F>");
			scanf("%s", p_data->color);
			gets(damy);
		}
		else if (moji == '3') {
			printf("�������ځi1.�ԍ��F2.���O�F3.�F�j>");
			scanf("%d", &i);
			if (i == 1) {
				printf("��������ԍ�>");
				scanf("%d", &bangou);
				while (p_data->no != 0) {
					if (p_data->no == bangou) {
						printf("�ԍ��F%d\t���O�F%s\t�F�F%s\n", p_data->no,
							p_data->name, p_data->color);
					}
					p_data++;
				}
			}
			else if (i == 2) {
				printf("�������閼�O>");
				scanf("%s", namae);
				while (p_data->no != 0) {
					if (strcmp(p_data->name, namae) == 0)
					{
						printf("�ԍ��F%d\t���O�F%s\t�F�F%s\n", p_data->no,
							p_data->name, p_data->color);
					}
					p_data++;
				}
			}
			else if (i == 3) {
				printf("��������F>");
				scanf("%s", iro);
				while (p_data->no != 0) {
					if (strcmp(p_data->color, iro) == 0)
					{
						printf("�ԍ��F%d\t���O�F%s\t�F�F%s\n", p_data->no,
							p_data->name, p_data->color);
					}
					p_data++;
				}
			}
			gets(damy);
		}
		else if (moji == 'X' || moji == 'x') {
			break;
		}
	}
}