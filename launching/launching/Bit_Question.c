#include <stdio.h>

int BitQuestion(void)
{
	int num;
	printf("���� �Է�");
	scanf_s("%d", &num);
	num = ~num + 1;

	printf("%d", num);
	return 0;
}