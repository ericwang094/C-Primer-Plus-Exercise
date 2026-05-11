#include <stdio.h>

double qube(double input);

int main(void)
{
	double input;
	printf("Enter a double value: \n");
	scanf("%lf", &input);

	double result = qube(input);
	printf("result: %lf", result);
}

double qube(double input)
{
	return input * input * input;
}