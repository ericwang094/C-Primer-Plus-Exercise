#include <stdio.h>
#include <string.h>

int main(void)
{
	char first_name[20];
	char last_name[20];
	printf("Input your first name and last name: \n");
	scanf("%s %s", first_name, last_name);

	int first_name_len = strlen(first_name);
	int last_name_len = strlen(last_name);

	printf("%s %s\n", first_name, last_name);
	printf("%*d %*d", first_name_len, first_name_len, last_name_len, last_name_len);
	printf("\n");

	printf("%s %s\n", first_name, last_name);
	printf("%-*d %-*d", first_name_len, first_name_len, last_name_len, last_name_len);
	return 0;
}