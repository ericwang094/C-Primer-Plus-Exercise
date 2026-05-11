#include <stdio.h>
void temperatures(float temperature);

int main(void)
{

	float input_temperature;
	printf("Enter a temperature: \n");
	int return_scanf = scanf("%f", &input_temperature);
	while (return_scanf == 1)
	{
		temperatures(input_temperature);
		printf("Enter a temperature: \n");
		int return_scanf = scanf("%f", &input_temperature);
	}
}

void temperatures(float temperature)
{

	const float celsius_5 = 5.0;
	const float celsius_9 = 9.0;
	const float fahrenheit_const = 32.0;
	const float kelvin_const = 273.16;

	float celsius = celsius_5 / celsius_9 * (temperature - fahrenheit_const);
	float kelvin = celsius + kelvin_const;

	printf("Fahrenheit temp: %.2f, Celsius: %.2f, Kelvin: %.2f\n", temperature, celsius, kelvin);
}