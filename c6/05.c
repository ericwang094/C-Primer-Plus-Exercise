#include <stdio.h>

int main(void)
{
	char input_char;
	printf("Enter the input char: \n");
	scanf("%c", &input_char);
	printf("Input char is %c, its distance from A is %d\n", input_char, input_char - 65);

	int difference_from_A = input_char - 65;

	for (int row = 0; row < difference_from_A + 1; row++)
	{
		int num_space = difference_from_A - row;
		for (int i = 0; i < num_space; i++)
		{
			printf(" ");
		}
		int mid_char = input_char - num_space;
		for (int i = 65; i < mid_char; i++)
		{
			printf("%c", i);
		}
		for (int i = mid_char; i >= 65; i--)
		{
			printf("%c", i);
		}
		printf("\n");
	}

	return 0;
}