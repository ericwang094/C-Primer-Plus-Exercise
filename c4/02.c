#include <stdio.h>
#include <string.h>

int main(void)
{
	char firstname[20];

	printf("What is firstname: \n");
	scanf("%s", firstname);

	printf("\"%s\"\n", firstname);
	printf("\"%20s\"\n", firstname);
	printf("\"%-20s\"\n", firstname);

	int name_length = strlen(firstname);
	int new_print_width = name_length + 3;
	printf("\"%*s\"\n", new_print_width, firstname);

	return 0;
}