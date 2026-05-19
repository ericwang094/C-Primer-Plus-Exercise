#include <stdio.h>

int main(void)
{
	int total = 1000000;
	float interest_rate = 0.08;
	int withdraw = 100000;
	int year = 1;

	while (total >= 0)
	{
		total -= withdraw;
		total = (1 + interest_rate) * total;
		year++;
	}

	printf("Chuckie can withdraw %d years of money until he empty his account.\n", year);

	return 0;
}