#include <stdio.h>
main()
{
	int c;
	char dumy[256];

	c = getchar();
	while (c != EOF) {
		putchar(c);
		putchar('\n');
		gets(dumy);  //getsは入力バッファに残ったものがある時残ったものをうけとる　それ以外では%sのscanfの変わり
		c = getchar();
	}
}