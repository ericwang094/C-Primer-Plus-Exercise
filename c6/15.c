#include <stdio.h>
#include <string.h>

int main(void)
{
	char input_arr[255];
	printf("Enter the input line of string: \n");
	int i = 0;
	while (scanf("%c", &input_arr[i]), input_arr[i] != '\n')
	{
		i++;
	}

	for (i = strlen(input_arr) - 1; i >= 0; i--)
	{
		printf("%c", input_arr[i]);
	}
sdf
	return 0;
}