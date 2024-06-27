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
	struct fruit fruit[3] = { {"peach",300,5,3,0 },{"grape",200,4,10,0} ,
		{"watermelon",1500,5,8,0} };
	struct fruit* pf;
	pf = &fruit[0];
	int i, gokei = 0;
	for (i = 0; i < 3; i++, pf++) {
		pf->total = pf->price * pf->number;
		printf("商品名：\t%s\n", pf->name);
		printf("価格：\t\t%d円\t\t", pf->price);
		printf("お勧め度：\t%dポイント\n", pf->point);
		printf("個数：\t\t%d個\t\t", pf->number);
		printf("金額：\t\t%d円\n\n\n", pf->total);
		gokei += pf->total;
	}
	printf("合計金額＝%d", gokei);
}