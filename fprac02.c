#include<stdio.h>
main()
{
	int maxscore, score = 0;
	char ch, maxname[20], name[20];
	FILE* fp;
	fp = fopen("score.txt", "r");
	fscanf(fp, "%s%d", maxname, &maxscore);
	fclose(fp);
	printf("�ō����_�@���O�F%s �X�R�A�F%d\n", maxname, maxscore);
	printf("player������́F");
	scanf("%s", name);
	while (1) {
		printf("���݂̃X�R�A�F%d('e'�ŏI��)\n", score);
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
			printf("�n�C�X�R�A�X�V�I\n");
		}
	}
}