#include<stdio.h>
enum BitState
{
	Base = 0,               //00000000 í èÌèÛë‘
	Poison = 1 << 0,		//00000001 ì≈
	Sleep = 1 << 1,			//00000010 ñ∞ÇË
	Paralysis = 1 << 2,		//00000100 Ç‹Ç–
	Burn = 1 << 3,			//00001000 Ç‚ÇØÇ«
	AtkUp = 1 << 4,			//00010000 çUåÇóÕÉAÉbÉv
	AtkDown = 1 << 5		//00100000 çUåÇóÕÉ_ÉEÉì
};
typedef unsigned int UINT;
void DisplayStatus(UINT s);
void ChangeFlag(UINT* s);
void ClearFlag(UINT* s);
main()
{
	UINT MyState = Base;
	ChangeFlag(&MyState);
	ClearFlag(&MyState);
	DisplayStatus(MyState);
}
void DisplayStatus(UINT s)
{
	printf("****åªç›ÇÃèÛë‘****\n");
	if (s & Poison) {
		printf("ì≈\n");
	}
	if (s & Sleep) {
		printf("ÇÀÇﬁÇË\n");
	}
	if (s & Paralysis) {
		printf("Ç‹Ç–\n");
	}
	if (s & Burn) {
		printf("Ç‚ÇØÇ«\n");
	}
	if (s & AtkUp) {
		printf("çUåÇóÕÉAÉbÉv\n");
	}
	if (s & AtkDown) {
		printf("çUåÇóÕÉ_ÉEÉì");
	}
	if (s == Base) {
		printf("èÛë‘àŸèÌÇ»Çµ\n");
	}
	printf("******************\n");
}
void ChangeFlag(UINT* s)
{
	int a;
	while (1) {
		DisplayStatus(*s);
		printf("Ç«ÇÃèÛë‘Çïtó^ÇµÇ‹Ç∑Ç©ÅH\n");
		printf("ÇPÅFì≈Å@ÇQÅFÇÀÇﬁÇËÅ@ÇRÅFÇ‹Ç–Å@ÇSÅFÇ‚ÇØÇ«Å@ÇTÅFçUåÇÅ™Å@ÇUÅFçUåÇÅ´Å@ÇOÅFèIóπ>");
		scanf("%d", &a);
		if (a == 0) {
			break;
		}
		
		switch (a) {
		case 1:
			*s |= Poison;
			break;
		case 2:
			*s |= Sleep;
			break;
		case 3:
			*s |= Paralysis;
			break;
		case 4:
			*s |= Burn;
			break;
		case 5:
			*s |= AtkUp;
			break;
		case 6:
			*s |= AtkDown;
			break;
		default:
			break;
		}
	}
}
void ClearFlag(UINT* s)
{
	int a;
	while (1)
	{
		DisplayStatus(*s);
		printf("Ç«ÇÃèÛë‘ÇâèúÇµÇ‹Ç∑Ç©ÅH\n");
		printf("ÇPÅFì≈ ÇQÅFÇÀÇﬁÇË ÇRÅFÇ‹Ç– ÇSÅFÇ‚ÇØÇ« ÇTÅFçUåÇÅ™ ÇUÅFçUåÇÅ´ ÇVÅFëSâèú ÇOÅFèIóπ>");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		switch (a)
		{
		case 1:
			*s &= ~Poison;
			break;
		case 2:
			*s &= ~Sleep;
			break;
		case 3:
			*s &= ~Paralysis;
			break;
		case 4:
			*s &= ~Burn;
			break;
		case 5:
			*s &= ~AtkUp;
			break;
		case 6:
			*s &= ~AtkDown;
			break;
		case 7:
			*s &= ~*s;
			break;
		default:
			break;

		}
	}
}