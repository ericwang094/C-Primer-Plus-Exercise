#include <stdio.h>

int main(void)
{
	int count, sum;

	int input_cap;

	count = 0;
	sum = 0;

	printf("Enter a number of cap: \n");
	scanf("%d", &input_cap);

	while (count++ < input_cap)
	{
		sum = sum + count * count;
	}

	printf("Sum = %d\n", sum);

	return 0;
}