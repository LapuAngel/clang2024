#include<stdio.h>
#include<string.h>
struct syohin_data {
	char name[20];
	int tanka;
};

void display3(struct syohin_data* psyohin);

main()
{
	struct syohin_data syohin= { "ƒPƒVƒSƒ€",50 };
	display3(&syohin);
}

void display3(struct syohin_data* psyohin) {
	printf("%s   %d", psyohin->name, psyohin->tanka);
	return;
}
