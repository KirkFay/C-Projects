//Author: Kirk Fay
//This program aims to convert numbers from
//one base to another

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Start the main method

int main() {
	char inBase;
	char outBase;
	int userInt;
	char userIntString[] = "";
	char dummy;
	char userContinue = 'Y';
	int binaryTransfer = 0;
	int i;

	//Check if the user wants to continue

	while (userContinue == 'Y' || userContinue == 'y') {
		printf("Base of input integer: Enter b for binary, d for decimal, h for hexadecimal or o for octal: ");
		scanf("%c", &inBase);
		//scanf("%c", &dummy);

		//Check if the input number is binary
		if (inBase == 'b' || inBase == 'B') {
			//Prompt and take in the number from the user
			printf("Enter the number: ");
			scanf("%s", userIntString);
			//scanf("%c", &dummy);
		}
		else if (inBase == 'h' || inBase == 'H') {
			//Prompt and take in the number from the user
			printf("Enter the number: ");
			scanf("%x", &userInt);
			//scanf("%c", &dummy);
		}
		else if (inBase == 'o' || inBase == 'O') {
			//Prompt and take in the number from the user
			printf("Enter the number: ");
			scanf("%o", &userInt);
			//scanf("%c", &dummy);
		}
		else
		{
			//Prompt and take in the number from the user
			printf("Enter the number: ");
			scanf("%d", &userInt);
			//scanf("%c", &dummy);
		}
		//Prompt and take in the base of the output from the user
		printf("Enter the base of the output(d,h or o): ");
		scanf("%c", &dummy);
		scanf("%c", &outBase);

		if (inBase == 'd' || inBase == 'D') {
			if (outBase == 'd' || outBase == 'D')
			{
				printf("The number %d in decimal is %d in decimal\n", userInt, userInt);
				printf("Do you wish to do another? (Y or N)");
				scanf("%c", &dummy);
				scanf("%c", &userContinue);
				scanf("%c", &dummy);

			}
			if (outBase == 'h' || outBase == 'H')
			{
				printf("The number %d in decimal is %x in hexadecimal\n ", userInt, userInt);
				printf("Do you wish to do another? (Y or N)");
				scanf("%c", &dummy);
				scanf("%c", &userContinue);
				scanf("%c", &dummy);
			}
			if (outBase == 'o' || outBase == 'O')
			{
				printf("The number %d in decimal is %o in octal \n", userInt, userInt);
				printf("Do you wish to do another? (Y or N)");
				scanf("%c", &dummy);
				scanf("%c", &userContinue);
				scanf("%c", &dummy);
			}
		}

		if (inBase == 'h' || inBase == 'H') {
			if (outBase == 'd' || outBase == 'D')
			{
				printf("The number %x in hexadecimal is %d in decimal\n", userInt, userInt);
				printf("Do you wish to do another? (Y or N)");
				scanf("%c", &dummy);
				scanf("%c", &userContinue);
				scanf("%c", &dummy);
			}
			if (outBase == 'h' || outBase == 'H')
			{
				printf("The number %x in hexaDecimal is %x in hexadecimal\n ", userInt, userInt);
				printf("Do you wish to do another? (Y or N)");
				scanf("%c", &dummy);
				scanf("%c", &userContinue);
				scanf("%c", &dummy);
			}
			if (outBase == 'o' || outBase == 'O')
			{
				printf("The number %x in hexaDecimal is %o in octal \n", userInt, userInt);
				printf("Do you wish to do another? (Y or N)");
				scanf("%c", &dummy);
				scanf("%c", &userContinue);
				scanf("%c", &dummy);
			}
		}
		if (inBase == 'o' || inBase == 'O') {
			if (outBase == 'd' || outBase == 'D')
			{
				printf("The number %o in octal is %d in decimal\n", userInt, userInt);
				printf("Do you wish to do another? (Y or N)");
				scanf("%c", &dummy);
				scanf("%c", &userContinue);
				scanf("%c", &dummy);
			}
			if (outBase == 'h' || outBase == 'H')
			{
				printf("The number %o in octal is %x in hexadecimal\n ", userInt, userInt);
				printf("Do you wish to do another? (Y or N)");
				scanf("%c", &dummy);
				scanf("%c", &userContinue);
				scanf("%c", &dummy);
			}
			if (outBase == 'o' || outBase == 'O')
			{
				printf("The number %o in octal is %o in octal \n", userInt, userInt);
				printf("Do you wish to do another? (Y or N)");
				scanf("%c", &dummy);
				scanf("%c", &userContinue);
				scanf("%c", &dummy);
			}
		}
		if (inBase == 'b' || inBase == 'B') {

			//Convert the binary string to an int
			for (i = 0; i < strlen(userIntString); i++)
			{
				binaryTransfer = (binaryTransfer << 1) + (userIntString[i] - 48);
			}
			if (outBase == 'd' || outBase == 'D')
			{
				printf("The number %s in binary is %d in decimal\n", userIntString, binaryTransfer);
				printf("Do you wish to do another? (Y or N)");
				scanf("%c", &dummy);
				scanf("%c", &userContinue);
				scanf("%c", &dummy);
			}
			if (outBase == 'h' || outBase == 'H')
			{
				printf("The number %s in binary is %x in hexadecimal\n ", userIntString, binaryTransfer);
				printf("Do you wish to do another? (Y or N)");
				scanf("%c", &dummy);
				scanf("%c", &userContinue);
				scanf("%c", &dummy);
			}
			if (outBase == 'o' || outBase == 'O')
			{
				printf("The number %s in binary is %o in octal \n", userIntString, binaryTransfer);
				printf("Do you wish to do another? (Y or N)");
				scanf("%c", &dummy);
				scanf("%c", &userContinue);
				scanf("%c", &dummy);
			}
		}



	}
	return 0;
	}
