#include <stdio.h>

int main(void)
{
	float download_speed = 18.12;
	float file_size_megabyte = 2.2;

	float download_time = file_size_megabyte * 8 / download_speed;

	printf("At %.2f megabits per second, a file of %.2f megabytes downloads in %.2f seconds",
		download_speed, file_size_megabyte, download_time);
}