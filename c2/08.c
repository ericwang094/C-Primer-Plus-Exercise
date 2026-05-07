#include <stdio.h>

int main(void)
{
	float PINT_TO_CUP = 0.5;
	float OUNCE_TO_CUP = 8;
	float OUNCE_TO_TABLESPOON = 2;
	float TABLESPOON_TO_TEASPOON = 3;

	float input_cups;
	printf("Input cups: ");
	scanf("%f", &input_cups);

	printf("%f cup(s) equals to: \n", input_cups);
	printf("%f pints. \n", PINT_TO_CUP * input_cups);
	printf("%f ounces. \n", OUNCE_TO_CUP * input_cups);
	printf("%f tablespoons. \n", input_cups * OUNCE_TO_TABLESPOON * OUNCE_TO_CUP);
	printf("%f teaspoons. \n", input_cups * OUNCE_TO_CUP * OUNCE_TO_TABLESPOON * TABLESPOON_TO_TEASPOON);
}