#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[20];
	printf("Input string: \n");
	scanf("%s", str);

	int len = strlen(str);
	for (int i = len - 1; i >= 0; i--)
	{
		printf("%c", str[i]);
	}

	return 0;
}