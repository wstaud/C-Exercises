#include <stdio.h>

int main()
{
	double subTotal = 200.50;
	const double TAX_RATE = 0.175;
	double total;
	double tax;

	tax = subTotal * TAX_RATE; // Calculates the owed tax
	total = subTotal + tax; // Adds owed tax to total... to create grandTotal
	printf("Your total is: $%.2f\n", total);

	return 0;
}