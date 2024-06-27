#include<stdio.h>
int goukei(int a, int b, int c);
float heikin(int a, int b, int c);
main(){
	int a, b, c;
	printf("整数を２つ入力：");
	scanf("%d%d%d", &a, &b, &c);
	printf("合計は、%d、平均は、%.2fです", goukei(a, b, c), heikin(a, b, c));
}
int goukei(int a, int b, int c) 
{
	return a + b + c;
}
float heikin(int a, int b, int c)
{
	return (float)goukei(a, b, c) / 3;
}