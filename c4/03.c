#include <stdio.h>

int main(void)
{
	float input;
	printf("Input a float number: \n");
	scanf("%f", &input);
	printf("%f %e\n", input, input);

	printf("%+f %E\n", input, input);

	return 0;
}