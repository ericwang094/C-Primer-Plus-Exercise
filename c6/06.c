#include <stdio.h>

int main(void)
{
	int lower_input;
	int upper_input;
	printf("Input lower and higher limit\n");
	scanf("%d%d", &lower_input, &upper_input);

	printf("|%10s|%10s|%10s|\n", "Input", "Square", "Cube");
	for (int i = lower_input; i <= upper_input; i++)
	{
		printf("|%10d|%10d|%10d|\n", i, i * i, i * i * i);
	}

	return 0;
}