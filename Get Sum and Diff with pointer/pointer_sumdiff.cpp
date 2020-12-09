#include <stdio.h>

void get_sum_diff(int x, int y, int* p_sum, int* p_diff);

int main(void)
{
	int a=0, b=0;
	scanf_s("%d %d", &a, &b);
	get_sum_diff(a, b, &a, &b);

	printf("두 수의 합 : %d\n", a);
	printf("두 수의 차 : %d\n", b);

	return 0;
}


void get_sum_diff(int x, int y, int* p_sum, int* p_diff)
{
	*p_sum = x + y;
	if (x >= y)
		*p_diff = x - y;
	else
		*p_diff = y - x;
}