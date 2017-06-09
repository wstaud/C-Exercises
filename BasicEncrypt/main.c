#include <stdio.h>

// Input Buffer Flush
void flushInput() {
	int ch;
	while ((ch = getchar()) != '\n' && ch != EOF);
}

// Encrypt Passpharse
void encrypt() {
	printf("Encrypt");
}

void decrypt() {
	printf("Decrypt");
}

// Prompt User
void promptUser() {
	char menuSelection[2];
	int selection;

	printf("Welcome To Terrible Encryption 5000!\n");
	printf("Please select a menu item:\n\n");
	// Ask user if they want to encrypt or decrypt
	printf("1: Encrypt a passpharse\n");
	printf("2: Decrypt a passpharse\n");
	fgets(menuSelection, 2, stdin);
	selection = atoi(menuSelection);

	if (selection == 1) {
		flushInput();
		encrypt();
	}
	else if (selection == 2) {
		flushInput();
		decrypt();
	}
	else {
		flushInput();
		printf("invalid menu selection");
		promptUser();
	}

}

// Execution
int main() {
	promptUser();
}