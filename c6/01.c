#include <stdio.h>

int main(void)
{
	char char_arr[26];
	for (int i = 0; i < 26; i++)
	{
		char_arr[i] = i + 97;
	}

	for (int i = 0; i < 26; i++)
	{
		printf("%c ", char_arr[i]);
	}

	return 0;
}