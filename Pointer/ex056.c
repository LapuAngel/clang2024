#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int tbl[][3] = { {10,20,30},
			{40,50,60},
			{70,80,90} };
	int* ptbl;
	ptbl = tbl[0];
	printf("2次元配列tblの内容\n");
	for (int i = 0; i < (3 * 3); i++) {
		printf(" %d ", *ptbl++);  //表示後に次のデータへ進む
	}
}