#include <stdio.h>

int main(void)
{
	int low, high;
	printf("Enter lower and upper integer limits: ");
	int scan_result = scanf("%d %d", &low, &high);
	while (scan_result == 2)
	{
		int sum = 0;
		int low_square = low * low;
		int high_square = high * high;
		for (int i = low; i <= high; i++)
		{
			sum += i * i;
		}
		printf("The sums of the squares from %d to %d to %d\n", low_square, high_square, sum);
		printf("Enter next set of limits: ");
		scan_result = scanf("%d %d", &low, &high);
	}
	printf("Done");
	return 0;
}