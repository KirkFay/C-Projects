/*
* Assignment 3 CSC311
* Kirk Fay
*/


#include <stdio.h>
#include <stdlib.h>

//Start of the main function
int main() {
	int userInt = 0;
	int k = 0;
	int pass;
	while (userInt >= 0) {
		printf("Please enter a positive integer, or enter 0 to quit: ");
		scanf("%d", &userInt);
		if (userInt > 0) {
			for (k = 1; k <= userInt; k++) {
				if (userInt % k == 0)
					pass++;
			}
			if (pass % 2 != 0) {
				printf("The light is on \n");
			}
			else
				printf("The light is off \n");
		}
		else if (userInt == 0)
		{
			printf("Have a nice day :) \n");
			return 0;
		}
		else {
			puts("This is not a postive integer!");
			printf("Try Again. \n");
			userInt = 0;
		}
	}
		return 0;
}
