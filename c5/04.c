#include <stdio.h>

int main(void)
{
	const int inch_to_cm = 2;
	const int feet_to_cm = 3;

	float input_height;
	printf("Enter the height in centimeters (<=0 to quit): \n");
	scanf("%f", &input_height);

	while (input_height > 0)
	{
		float inch = input_height / inch_to_cm;
		float feet = input_height / feet_to_cm;
		printf("%f cm = %f feet, %f inches\n", input_height, feet, inch);
		scanf("%f", &input_height);
	}
	return 0;
}