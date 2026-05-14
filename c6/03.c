#include <stdio.h>

int main(void)
{

	const int ASCII_F = 70;
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%c", ASCII_F - j);
		}
		printf("\n");
	}
	return 0;
}