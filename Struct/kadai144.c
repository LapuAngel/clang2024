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
	struct fruit* pf;
	pf = &fruit;
	pf->total = pf->price * pf->number;
	printf("商品名：\t%s\n", pf->name);
	printf("価格：\t\t%d円\n", pf->price);
	printf("お勧め度：\t%dポイント\n",pf->point);
	printf("個数：\t\t%d個\n", pf->number);
	printf("金額：\t\t%d円\n", pf->total);
}