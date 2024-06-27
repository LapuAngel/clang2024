#include<stdio.h>
#include<string.h>
struct fruit {
	char name[30];
	int price;
	int point;
	int number;
	int total;
};
main()
{
	struct fruit fruit = { "peach",300,5,3,0 };
	fruit.total = fruit.price * fruit.number;
	printf("商品名：\t%s\n", fruit.name);
	printf("価格：\t\t%d円\n", fruit.price);
	printf("お勧め度：\t");
	for (; fruit.point > 0; fruit.point--) {
		printf("★");
	}
	printf("\n個数：\t\t%d個\n", fruit.number);
	printf("金額：\t\t%d円\n", fruit.total);
}