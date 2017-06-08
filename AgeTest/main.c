#include <stdio.h>

int main()
{
	int age = 70;
	double bonus;

	if (age > 40) {
		bonus = 5000.00;
	}
	else {
		bonus = 2500.50;
	}

	printf("Because you are %d years of age, your bonus is: $%.2f\n", age, bonus);

	return 0;
}