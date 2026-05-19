#include <stdio.h>

int main(void)
{
	int remaining_friends = 5;
	int dunbar = 150;

	int week = 1;

	while (remaining_friends <= dunbar)
	{
		remaining_friends = (remaining_friends - week) * 2;
		printf("At %d week, there are %d friends left.\n", week, remaining_friends);
		week++;
	}
	return 0;
}