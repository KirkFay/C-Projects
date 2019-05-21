//Author: Kirk Fay
//This program aims to count the characters
//of a given string and outputs the results
//include statements
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAXCHAR 256



//Declare the main
//int argc, char const *argv[]
int main() {
        int whiteChar = 0;
        int digits = 0;
        int lowerChar = 0;
        int upperChar = 0;
        char userStr[MAXCHAR] = {0};
        char userAltStr[MAXCHAR] = {0};
        int i = 0, c, dummy;

        printf("+-+-+-+-+-+_charCount.c_+-+-+-+-+-+\n");
        printf("Enter any input from the keyboard. To end input, type z\n");

        printf("Please enter an array of characters: ");
        //c != '\n' for enter char
        {
                while (i + 1 < MAXCHAR && (c = getchar()) != 'z' && c != EOF)

                        if (isspace(c)) {
                                whiteChar++;
                                userAltStr[i++] = c;

                        }
                        else if (isdigit(c)) {
                                digits++;
                                userAltStr[i++] =c;

                        }
                        else if (isupper(c)) {
                                upperChar++;
                                userAltStr[i++] =(tolower(c));
                        }
                        else if (islower(c)) {
                                lowerChar++;

                                userAltStr[i++] = (toupper(c));

                        }
                        else
                                userAltStr[i++] = (c);
              //  userStr[i] = c;
                //userStr[i] = 0;
                scanf("%c", &dummy);
        }




        printf("|--------------After change of case---------------|\n");
        printf("%s\n", userAltStr);
        printf("|---------------------Results---------------------|\n");
        printf("The number of whitespace characters is: %d \n", whiteChar);
        printf("The number of digits is: %d \n", digits);
        printf("The number of lowercase characters is: %d \n", lowerChar);
        printf("The number of uppercase characters is: %d \n", upperChar);
        printf("|-------------------------------------------------|\n");
        return 0;
}
