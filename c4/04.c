#include <stdio.h>

int main(void)
{
	int height;
	char name[20];

	printf("input your name and height:\n");
	scanf("%s %d", name, &height);
	printf("%s, you are %.2f meters height", name, height/100.0);
}