#include <stdio.h>

int main()
{
	char ageString[10];
	int age = 70;
	double bonus;

	// Ask user for age
	printf("What is your age? ");
	gets(ageString);
	age = atoi(ageString);

	// Calculate the bonus a person based off age
	if (age > 40) {
		bonus = 5000.00;
	}
	else {
		bonus = 2500.50;
	}

	printf("Because you are %d years of age, your bonus is: $%.2f\n", age, bonus);

	return 0;
}