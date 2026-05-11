#include <stdio.h>

int main(void)
{
	int first_num, second_num;

	printf("This program computes moduli.\n");
	printf("Enter an integer to serve as the second operand: ");
	scanf("%d", &second_num);
	printf("\n");
	printf("Now enter the first operand: ");
	scanf("%d", &first_num);
	printf("\n");


	while (first_num > 0)
	{
		printf("%d %% %d is %d\n", first_num, second_num, first_num % second_num);
		printf("Enter next number for first operand (<= 0 to quit): ");
		scanf("%d", &first_num);
	}
	printf("Done");
	return 0;
}