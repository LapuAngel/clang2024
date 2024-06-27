#include<stdio.h>
main()
{
	int maxscore, score = 0;
	char ch, maxname[20], name[20];
	FILE* fp;
	fp = fopen("score.txt", "r");
	fscanf(fp, "%s%d", maxname, &maxscore);
	fclose(fp);
	printf("最高得点　名前：%s スコア：%d\n", maxname, maxscore);
	printf("player名を入力：");
	scanf("%s", name);
	while (1) {
		printf("現在のスコア：%d('e'で終了)\n", score);
		ch = getch();
		if (ch == 'e') {
			break;
		}
		else {
			score++;
		}
		if (score > maxscore) {
			fp = fopen("score.txt", "w");
			fprintf(fp, "%s\n%d\n", name, score);
			fclose(fp);
			printf("ハイスコア更新！\n");
		}
	}
}