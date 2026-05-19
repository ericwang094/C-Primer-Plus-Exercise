#include <stdio.h>

int main(void)
{
	int input_arr[8];
	for (int i = 0; i < 8; i++)
	{
		scanf("%d", &input_arr[i]);
	}

	for (int i = 7; i >= 0; i--)
	{
		printf("%d ", input_arr[i]);
	}
	return 0;
}