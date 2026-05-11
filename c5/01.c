#include <stdio.h>

int main(void)
{
	const float hour_to_mins = 60.0;
	int time_in_mins;
	printf("Enter time in seconds: \n");
	scanf("%d", &time_in_mins);
	while (time_in_mins > 0)
	{
		float hour = time_in_mins / hour_to_mins;
		printf("User input time in mintues %d, which is %.2f in hour. \n", time_in_mins, hour);
		scanf("%d", &time_in_mins);
	}
	return 0;
}