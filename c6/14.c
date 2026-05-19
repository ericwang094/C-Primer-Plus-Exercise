#include <stdio.h>

int main(void)
{
	double input_arr[8];
	printf("Enter the number 8 times: \n");

	double second_arr[8];
	double second_sum = 0;
	for (int i = 0; i < 8; i++)
	{
		scanf("%lf", &input_arr[i]);
		second_sum += input_arr[i];
		second_arr[i] = second_sum;
	}
	for (int i = 0; i < 8; i++)
	{
		printf("%lf\n", input_arr[i]);
	}
	printf("\n");
	for (int i = 0; i < 8; i++)
	{
		printf("%lf\n", second_arr[i]);
	}

	return 0;
}