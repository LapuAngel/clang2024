#include <stdio.h>
int saidaiti(int* p, int number);
int saisyoti(int* p, int number);
main()
{
	int data[8] = { 6,10,8,2,9,5,1,7 };
	printf("Å‘å’l%d\n", saidaiti(data, 8));
	printf("Å‘å’l%d\n", saisyoti(data, 8));
}
int saidaiti(int* p, int number){
	int dai = *p, i = 0;
	while (i < number - 1) {
		p++;
		if (dai < *p) {
			dai = *p;
		}
		i++;
	}
	return(dai);
}
int saisyoti(int* p, int number) {
	int  syo = *p, i = 0;
	while (i < number - 1) {
		p++;
		if (syo > *p) {
			syo = *p;
		}
		i++;
	}
	return(syo);
}