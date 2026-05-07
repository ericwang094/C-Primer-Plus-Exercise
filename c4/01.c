//
// Created by yongqi wang on 7/5/2026.
//
#include <stdio.h>

int main(void)
{
	char firstname[20];
	char lastname[20];

	printf("What is your first name?\n");
	scanf("%s", firstname);
	printf("What is your last name?\n");
	scanf("%s", lastname);

	printf("%s, %s\n", lastname, firstname);
}