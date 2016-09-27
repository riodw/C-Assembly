/*Counting Characters
* Rio Weber
* 9-23-2015
* ASCII counter
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void printTOTALS(char titles [30], int total)
{
	printf("%19s: %4d chars\n", titles, total);
}

int main(int argc, char **argv)
{
	char stringIn[1000];
	int nextC; // for EOF
	int i = 0;


	int total_Chars = 0;
	int total_Distinct = 0;
	int total_Alphabet = 0;
	int total_Digits = 0;
	int whiteSpace = 0;
	int mostCommonChar = 0, leastCommonChar = 0;

	printf("Enter text. Signal EOF when done.\n");
	fgets(stringIn, 1000, stdin);

	while() {
        //nextC = getchar();
				nextC = fgets(stringIn, 1, stdin);

        if (nextC == EOF) break;

        if (stringIn[c] == 0)
            nDistinct++;

				if(isalpha(stringIn[i])) total_Alphabet++;

				else if(isspace(stringIn[i]))  whiteSpace++;

				else if(isdigit(stringIn[i])) total_Digits++;

				i++;
        total_Chars++;
        stringIn[nextC]++;
    }



	printf("-------------------- ----------\n");
	printTOTALS("Total", total_Chars);
	printTOTALS("Distinct", total_Distinct);
	printTOTALS("Alphabet", total_Alphabet);
	printTOTALS("Whitespace", whiteSpace);
	printTOTALS("Digits", total_Digits);
	printTOTALS("Most occurrences", mostCommonChar);
	printTOTALS("Fewest occurrences", leastCommonChar);
	printf("-------------------- ----------\n");


	return 0;
}
