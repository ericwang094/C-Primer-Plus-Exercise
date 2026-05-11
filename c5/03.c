#include <stdio.h>

int main(void)
{
	int num_days;
	printf("Enter number of days: \n");
	scanf("%d", &num_days);

	while (num_days != 0 || num_days == -20)
	{
		int num_weeks = num_days / 7;
		int num_remain_days = num_days % 7;
		printf("%d days are %d weeks, %d days.\n", num_days, num_weeks, num_remain_days);


		printf("Enter number of days: \n");
		scanf("%d", &num_days);
	}

	return 0;
}