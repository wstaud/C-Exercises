#include <stdio.h>

// Input Buffer Flush
int readln(char s[], int maxlen) {
	char ch;
	int i;
	int chars_remain;

	i = 0;
	chars_remain = 1;
	while (chars_remain) {
		ch = getchar();
		if ((ch == '\n') || (ch == EOF)) {
			chars_remain = 0;
		}
		else if (i < maxlen - 1) {
			s[i] = ch;
			i++;
		}
	}
	s[i] = '\0';
	return i;
}

// Encrypt Passpharse
void encrypt() {
	char passpharse[50];
	char encryptedPasspharse[50];

	printf("Encryption Selected.\n");
	printf("What is the passpharse you would like to encrypt?\n");
	readln(passpharse, 50);
	
	for (int i = 0; i < 50; i++) {
		if (passpharse[i] == '\0') {
			encryptedPasspharse[i] = '\0';
			printf("BREAK");
			break;
		}
		encryptedPasspharse[i] = passpharse[i] + 1;
		//debug printf("%c", passpharse[i]);
	}
	printf("Encrypted passpharse is: %s", encryptedPasspharse);
}

void decrypt() {
	printf("Decryption Selected.\n");
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
	readln(menuSelection, 2);
	selection = atoi(menuSelection);

	if (selection == 1) {
		encrypt();
	}
	else if (selection == 2) {
		decrypt();
	}
	else {
		printf("invalid menu selection");
		promptUser();
	}

}

// Execution
int main() {
	promptUser();
}