#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
	int int_max = INT_MAX;
	float flt_overflow = FLT_MAX;
	float flt_underflow = FLT_MIN;

	printf("Int overflow: INT_MAX + 1: %d \n", int_max + 1);
	printf("Float overflow: %f \n", flt_overflow * 2);
	printf("Float underflow: %f \n", flt_underflow / 2);


// Int overflow: INT_MAX + 1: -2147483648
// Float overflow: inf
// Float underflow: 0.000000
	return 0;
}