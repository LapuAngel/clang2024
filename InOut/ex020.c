#include<stdio.h>
main()
{
	char no1;
	printf("小文字を入力：");//小文字を入力：と画面に表示
	scanf("%c", &no1);//キーボードから英小文字を入力して変数no1に格納
	printf("大文字に変換して＝%c", no1 - 0x20);//（大文字に変換して）＋変数no1を処理して
	　　　　　　　　　　　　　　　　　　　　　 //大文字にして表示 0x20 のところは　32 でもよい
}