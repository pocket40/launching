#include <stdio.h>

int FloatError(void)
{
	int i;
	float num = 0.0;

	for (i = 0; i < 100; i++)
		num += 0.1; //�̿����� 100ȸ ����

	printf("0.1�� 100�� ���� ���: %f \n", num);
}