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
	printf("���i���F\t%s\n", pf->name);
	printf("���i�F\t\t%d�~\n", pf->price);
	printf("�����ߓx�F\t%d�|�C���g\n",pf->point);
	printf("���F\t\t%d��\n", pf->number);
	printf("���z�F\t\t%d�~\n", pf->total);
}