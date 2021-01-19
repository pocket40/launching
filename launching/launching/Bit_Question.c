#include <stdio.h>

int BitQuestion(void)
{
	int num;
	printf("숫자 입력");
	scanf_s("%d", &num);
	num = ~num + 1;

	printf("%d", num);
	return 0;
}