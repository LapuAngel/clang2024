#include<stdio.h>
#include<string.h>
main(int argc, char* argv[])
{
	int i = 0;
	char arg[5] = { 'A','B','C','D','E' };
	if (*argv[1] == 'H') {
		while (i < 5) {
			printf("%c---%x   ", arg[i], arg[i]);
			i++;
		}
		if (*argv[1] == 'D') {
			while (i < 5); {
				printf("%c---%d   ", arg[i], arg[i]);
				i++;
			}
		}
	}
}