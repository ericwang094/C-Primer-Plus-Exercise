#include <stdio.h>

int main(void)
{
	float INCH_TO_CM = 2.54;
	float input_inch;

	printf("Your height in inches: ");
	scanf("%f", &input_inch);

	printf("You height in cm is: %f\n", INCH_TO_CM * input_inch);

	return 0;
}