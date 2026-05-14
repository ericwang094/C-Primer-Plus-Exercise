#include <stdio.h>

int main(void)
{
	int const ASCII_A = 65;
	int next_char = ASCII_A;

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%c", next_char);
			next_char += 1;
		}
		printf("\n");
	}

	return 0;
}