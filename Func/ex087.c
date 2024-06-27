#include<stdio.h>
main(int argc, char* argv[])
{
	int sum;
	if (argc == 3) {
		sum = atoi(argv[1]) + atoi(argv[2]);//atoi：int型への変換  atof：double型への変換  atol：long型への変換
		printf("%s+%s=%d", argv[1], argv[2], sum);
	}
	else {
		printf("２つの引数（整数）を設定して実行してください");
	}
}