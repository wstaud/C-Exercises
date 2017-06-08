#include <stdio.h>

void flushInput() {
	int ch;
	while ((ch = getchar()) != '\n' && ch != EOF);
}

int main()
{
	char ageString[10];
	char firstName[15];
	char lastName[15];
	int age = 70;
	double bonus;

	// Ask user for name
	printf("What is your first name? \n");
	fgets(firstName, 15, stdin);
	
	printf("What is your last name? \n");
	fgets(lastName, 15, stdin);

	// Ask user for age
	printf("What is your age? ");
	fgets(ageString, 10, stdin);
	age = atoi(ageString);
	flushInput();

	// Calculate the bonus a person based off age
	if (age == 0) {
		printf("You entered an invalid age!");
	}
	else {
		if (age > 40) {
			bonus = 5000.00;
		}
		else {
			bonus = 2500.50;
		}
	}
	
	printf("Hello %s %s", firstName, lastName);
	printf("Because you are %d years of age, your bonus is: $%.2f\n", age, bonus);

	return 0;
}