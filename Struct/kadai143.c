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
	printf("���i���F\t%s\n", fruit.name);
	printf("���i�F\t\t%d�~\n", fruit.price);
	printf("�����ߓx�F\t");
	for (; fruit.point > 0; fruit.point--) {
		printf("��");
	}
	printf("\n���F\t\t%d��\n", fruit.number);
	printf("���z�F\t\t%d�~\n", fruit.total);
}