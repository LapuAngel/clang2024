#include<stdio.h>
int goukei(int a, int b, int c);
float heikin(int a, int b, int c);
main(){
	int a, b, c;
	printf("�������Q���́F");
	scanf("%d%d%d", &a, &b, &c);
	printf("���v�́A%d�A���ς́A%.2f�ł�", goukei(a, b, c), heikin(a, b, c));
}
int goukei(int a, int b, int c) 
{
	return a + b + c;
}
float heikin(int a, int b, int c)
{
	return (float)goukei(a, b, c) / 3;
}