#include <stdio.h>
#include <float.h>

int main(void)
{
	float v1 = 1.0 / 3.0;
	double v2 = 1.0 / 3.0;

	printf("float result %.4f, %.12f, %.16f \n", v1, v1, v1);
	printf("double result %.4f, %.12f, %.16f\n", v2, v2, v2);

	printf("FLT_DIG: %d\n", FLT_DIG);
	printf("DBL_DIG: %d\n", DBL_DIG);
}