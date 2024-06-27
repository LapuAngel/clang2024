#include<stdio.h>
#include<string.h>
struct menba {
	char cose[30];
	char kyouka[20];
	int tani;
};
main()
{
	struct menba mem;
	strcpy(mem.cose, "ゲームソフトⅠコース");
	strcpy(mem.kyouka, "C言語");
	mem.tani = 8;
	printf("コース名：%s\n教科名：%s\n単位数：%d\n", mem.cose, mem.kyouka, mem.tani);
}