#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int p, c;
	while (1) {
		srand(time(0));
		rand();
		printf("何を出しますか?\n(1:グー 2:チョキ 3:パー)：");
		scanf("%d", &p);
		c = rand() % 3 + 1;
		switch (p) {
		case 1:
			printf("\nプレイヤーは、グーです。\n");
			break;
		case 2:
			printf("\nプレイヤーは、チョキです。\n");
			break;
		case 3:
			printf("\nプレイヤーは、パーです。\n");
		}
		switch (c) {
		case 1:
			printf("コンピュータは、グーです。\n");
			break;
		case 2:
			printf("コンピュータは、チョキです。\n");
			break;
		case 3:
			printf("コンピュータは、パーです。\n");
		}
		if (p == 1 && c == 2 || p == 2 && c == 3 || p == 3 && c == 1) {
			printf("\nプレイヤーの勝ちです");
			break;
		}
		else if (p == 1 && c == 3 || p == 2 && c == 1 || p == 3 && c == 2) {
			printf("\nプレイヤーの負けです");
			break;
		}
		else {
			printf("\nあいこです\n\n");
		}
	}
}