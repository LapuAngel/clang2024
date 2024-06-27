#include<stdio.h>
main()
{
	int score = 0;
	char ch, name[20];
	FILE* fp;
	printf("player      ́F");
	scanf("%s", name);
	while (1) {
		printf("   ݂̃X R A F%d('e' ŏI  )\n", score);
		ch = getch();
		if (ch == 'e') {
			break;
		}
		else {
			score++;
		}
	}
	fp = fopen("score.txt", "w");
	fprintf(fp, "%s\n%d\n", name, score);
	fclose(fp);
}