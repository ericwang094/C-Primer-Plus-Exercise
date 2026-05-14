#include <stdio.h>

float cal(float f1, float f2);

int main(void)
{
	float f1, f2;

	printf("Input two float number: \n");
	scanf("%f %f", &f1, &f2);

	float result = cal(f1, f2);
	printf("result = %f\n", result);
	while (scanf("%f %f", &f1, &f2) == 2)
	{
		float result = cal(f1, f2);
		printf("result = %f\n", result);
	}
}

float cal(float f1, float f2)
{
	return (f1 - f2) / (f1 * f2);
}