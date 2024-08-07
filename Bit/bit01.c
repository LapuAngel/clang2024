#include<stdio.h>
enum BitState
{
	Base = 0,               //00000000 通常状態
	Poison = 1 << 0,		//00000001 毒
	Sleep = 1 << 1,			//00000010 眠り
	Paralysis = 1 << 2,		//00000100 まひ
	Burn = 1 << 3,			//00001000 やけど
	AtkUp = 1 << 4,			//00010000 攻撃力アップ
	AtkDown = 1 << 5		//00100000 攻撃力ダウン
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
	printf("****現在の状態****\n");
	if (s & Poison) {
		printf("毒\n");
	}
	if (s & Sleep) {
		printf("ねむり\n");
	}
	if (s & Paralysis) {
		printf("まひ\n");
	}
	if (s & Burn) {
		printf("やけど\n");
	}
	if (s & AtkUp) {
		printf("攻撃力アップ\n");
	}
	if (s & AtkDown) {
		printf("攻撃力ダウン");
	}
	if (s == Base) {
		printf("状態異常なし\n");
	}
	printf("******************\n");
}
void ChangeFlag(UINT* s)
{
	int a;
	while (1) {
		DisplayStatus(*s);
		printf("どの状態を付与しますか？\n");
		printf("１：毒　２：ねむり　３：まひ　４：やけど　５：攻撃↑　６：攻撃↓　０：終了>");
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
		printf("どの状態を解除しますか？\n");
		printf("１：毒 ２：ねむり ３：まひ ４：やけど ５：攻撃↑ ６：攻撃↓ ７：全解除 ０：終了>");
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