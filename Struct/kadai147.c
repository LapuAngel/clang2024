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
		printf("処理メニュー（Xの入力で終了します）\n");
		printf("1:データ表示\t2:データ追加\t3:データ検索\t処理は？");
		moji = getchar();
		gets(damy);
		if (moji == '1') {
			while (p_data->no != 0) {
				printf("番号：%d\t名前：%s\t色：%s\n", p_data->no,
					p_data->name, p_data->color);
				p_data++;
			}
		}
		else if (moji == '2') {
			while (p_data->no != 0) {
				p_data++;
			}
			printf("データの追加を行いますので入力してください。\n");
			printf("番号>");
			scanf("%d", &p_data->no);
			printf("名前>");
			scanf("%s", p_data->name);
			printf("色>");
			scanf("%s", p_data->color);
			gets(damy);
		}
		else if (moji == '3') {
			printf("検索項目（1.番号：2.名前：3.色）>");
			scanf("%d", &i);
			if (i == 1) {
				printf("検索する番号>");
				scanf("%d", &bangou);
				while (p_data->no != 0) {
					if (p_data->no == bangou) {
						printf("番号：%d\t名前：%s\t色：%s\n", p_data->no,
							p_data->name, p_data->color);
					}
					p_data++;
				}
			}
			else if (i == 2) {
				printf("検索する名前>");
				scanf("%s", namae);
				while (p_data->no != 0) {
					if (strcmp(p_data->name, namae) == 0)
					{
						printf("番号：%d\t名前：%s\t色：%s\n", p_data->no,
							p_data->name, p_data->color);
					}
					p_data++;
				}
			}
			else if (i == 3) {
				printf("検索する色>");
				scanf("%s", iro);
				while (p_data->no != 0) {
					if (strcmp(p_data->color, iro) == 0)
					{
						printf("番号：%d\t名前：%s\t色：%s\n", p_data->no,
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