#include <stdio.h>

int GeneralTesting()
{
	int userInput = 0;
	printf("Input a character:");
	userInput = getchar();

	printf("Your char was: ");
	putchar(userInput);

	return 0;
}