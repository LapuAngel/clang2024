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
	int i, gokei = 0;
	for (i = 0; i < 3; i++) {
		fruit[i].total = fruit[i].price * fruit[i].number;
		printf("¤•i–¼F\t%s\n", fruit[i].name);
		printf("‰¿ŠiF\t\t%d‰~\t\t", fruit[i].price);
		printf("‚¨Š©‚ß“xF\t");
		for (; fruit[i].point > 0; fruit[i].point--) {
			printf("š");
		}
		printf("\nŒÂ”F\t\t%dŒÂ\t\t", fruit[i].number);
		printf("‹àŠzF\t\t%d‰~\n\n\n", fruit[i].total);
		gokei += fruit[i].total;
	}
	printf("‡Œv‹àŠz%d", gokei);
}