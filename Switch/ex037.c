#include<stdio.h>
main()
{
	char no1;
	printf("演算子を入力：");
	scanf("%c",& no1);
	switch (no1) {
	case'+':
		printf("加算です");
		break;
	case'-':
		printf("減算です");
		break;
	case'*':
		("乗算です");
		break;
	case'/':
		printf("除算です");
		break;
	case'%':
		printf("あまりです");
		break;
	default:
		printf("その他です");
	}
}