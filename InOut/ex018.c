#include<stdio.h>
main()
{
	int no1, no2, no3;//���������č��v�Ƃ��Ďg���Ă��悢
	printf("������3���́F");
	scanf("%d %d %d", &no1, &no2, &no3);//scanf�ɂ�&��K������
	printf("���v��%d   ���ρ�%.2f", no1 + no2 + no3, (float)(no1 + no2 + no3) / 3);//����3.0�ł���Ă��悢
//(float)�̓L���X�g�Ƃ�������������float�ɂȂ�
}