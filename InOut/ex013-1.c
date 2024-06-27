#include<stdio.h>
main()
{
	char Su,Sa;
	Su = '5';
	Sa = '6';
	printf("%c Å~ %c = %d", Su, Sa, (Su - 0x30) * (Sa - 0x30));
}