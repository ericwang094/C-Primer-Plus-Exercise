#include <stdio.h>

int main(void)
{
	const float gallon_to_liters = 3.785;
	const float mile_to_km = 1.609;

	float miles_traveled;
	float gallon_consumed;

	printf("Input miles traveled and gallon consumed: \n");
	scanf("%f %f", &miles_traveled, &gallon_consumed);
	float miles_per_gallon = miles_traveled / gallon_consumed;
	float liters_per_km = (miles_traveled * mile_to_km) / (gallon_consumed * gallon_to_liters);

	printf("Mile Per Gallon: %.1f\n", miles_per_gallon);
	printf("Liters Per KM: %.1f\n", liters_per_km);

	return 0;
}