#include <stdio.h>

int Notation(void)
{
	int num1 = 0xA7, num2 = 0x43; //0x==16������ ǥ��
	int num3 = 032, num4 = 024; //0==8������ ǥ��

	printf("0xA7�� 10���� ��������: %d \n", num1);
	printf("0x43�� 10���� ��������: %d \n", num2);
	printf("032�� 10���� ��������: %d \n", num3);
	printf("024�� 10���� ��������: %d \n", num4);

	printf("%d - %d = %d \n", num1, num2, num1 - num2);
	printf("%d + %d = %d \n", num3, num4, num3 + num4);
}