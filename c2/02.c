#include <stdio.h>

int main(void)
{
	int input;

	printf("Enter an ACSII code: ");
	scanf("%d", &input);
	printf("Character for ASCII code %d: %c\n", input, input);

	return 0;
}