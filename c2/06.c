#include <stdio.h>

int main(void)
{
	float MASS_WATER_MOLECULE = 3.0e-23;
	unsigned QUART_TO_GRAM = 950;

	unsigned input_quart;
	printf("A quart of water: ");
	scanf("%u", &input_quart);

	printf("Number of water molecules: %f\n", QUART_TO_GRAM * input_quart / MASS_WATER_MOLECULE);

	return 0;
}