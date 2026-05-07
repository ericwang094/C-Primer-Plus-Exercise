#include <stdio.h>

int main(void)
{
	unsigned int age_year;
	unsigned int SECONDS_PER_YEAR = 3.156e7;

	printf("Input your age in year: ");
	scanf("%u", &age_year);

	float age_in_secs = age_year * SECONDS_PER_YEAR;
	printf("Your age in secs is: %e", age_in_secs);

	return 0;
}