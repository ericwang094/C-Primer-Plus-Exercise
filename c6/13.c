#include <stdio.h>

int main(void)
{
	int input_arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
	for (int i = 0; i < 8; i++)
	{
		input_arr[i] = input_arr[i] * input_arr[i];
	}

	int j = 0;
	while (j < 8)
	{
		printf("%d ", input_arr[j]);
		j++;
	}

	return 0;
}