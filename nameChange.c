//Author: Kirk Fay
//This program will change all found instances of the first specified String
//With the second given string in the file specified

//include statements

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void fileConvert(char * tempKeyword1, char * tempKeyword2, char * fileName) {
	FILE *origTxt;
	FILE *secondTxt;
	char BUFFER[1000];
	char *tempPtr;
	char tempSecondFile[] = "tempString";
	int index = 0;


	secondTxt = fopen(tempSecondFile, "w");
	origTxt = fopen(fileName, "r");
	if (origTxt == NULL) {
		printf("ERROR OPENING FILE!");
		exit(1);
	}
	else {

		while ((fgets(BUFFER, 1000, origTxt)) != NULL) {


			tempPtr = strstr(&BUFFER[index], tempKeyword1);

			while (tempPtr != NULL) {

				while (&BUFFER[index] != tempPtr) {
					fputc(BUFFER[index], secondTxt);
					index++;
				}
				fputs(tempKeyword2, secondTxt);
				index = index + strlen(tempKeyword1);

				tempPtr = strstr(&BUFFER[index], tempKeyword1);
			}

			fputs(&BUFFER[index], secondTxt);
			strcpy(BUFFER, "\0");
			index = 0;
		}

		fclose(origTxt);
		fclose(secondTxt);
		remove(fileName);
		rename(tempSecondFile, fileName);
	}
}

int main(int argc, char* argv[]) {

        if (argc != 4) {
                printf("Insufficient command line arguments.\n");
                printf("Terminating...\n");
				return -1;
        }
        else
          fileConvert(argv[1],argv[2], argv[3]);
                return 0;
}
