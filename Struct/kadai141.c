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
	strcpy(mem.cose, "�Q�[���\�t�g�T�R�[�X");
	strcpy(mem.kyouka, "C����");
	mem.tani = 8;
	printf("�R�[�X���F%s\n���Ȗ��F%s\n�P�ʐ��F%d\n", mem.cose, mem.kyouka, mem.tani);
}