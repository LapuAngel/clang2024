#include<stdio.h>
main()
{
	char ia;
	printf("アルファベット？");
	scanf("%c",& ia);
	if ('A'<=ia&&ia<='Z') {
		printf("その文字は「大文字」です");
	}
	else if ('a'<=ia&&ia<='a') {
		printf("その数は「奇数」です");
	}
}