#include <stdio.h>

int main(void)
{
	int input;
	printf("What is your input?\n");
	scanf("%d", &input);

	int loop = 0;
	while (loop <= 10)
	{
		printf("%d\n", input + loop);
		loop++;
	}
	return 0;
}