#include <stdio.h>
main()
{
	int a = 0, goukei = 0, count = 0;

	printf("����(�OZ�ŏI��)�H");
	while ((scanf("%d", &a)) != EOF) {
		goukei += a;
		count++;
		printf("����(�OZ�ŏI��)�H");
	}
	printf("���v��%d   ���ρ�%.2f\n", goukei, (float)goukei / count);
}