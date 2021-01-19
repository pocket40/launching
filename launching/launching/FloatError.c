#include <stdio.h>

int FloatError(void)
{
	int i;
	float num = 0.0;

	for (i = 0; i < 100; i++)
		num += 0.1; //이연산을 100회 진행

	printf("0.1을 100번 더한 결과: %f \n", num);
}