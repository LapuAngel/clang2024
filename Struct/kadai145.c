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
		printf("���i���F\t%s\n", fruit[i].name);
		printf("���i�F\t\t%d�~\t\t", fruit[i].price);
		printf("�����ߓx�F\t");
		for (; fruit[i].point > 0; fruit[i].point--) {
			printf("��");
		}
		printf("\n���F\t\t%d��\t\t", fruit[i].number);
		printf("���z�F\t\t%d�~\n\n\n", fruit[i].total);
		gokei += fruit[i].total;
	}
	printf("���v���z��%d", gokei);
}