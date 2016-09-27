/*Counting Characters
* Rio Weber
* 9-23-2015
* ASCII counter
*/
#include<stdio.h>
#include<string.h>

int main(int argc, char **argv)
{
	char stringIn[1000];
	char mostChar, leastChar;
	
	int total_Chars = 0;
	int total_Distinct = 0;
	int total_Alphabet = 0;
	int whiteSpace = 0;
	int digits = 0;
	int mostCommonChar = 0, leastCommonChar = 0;

	fgets(stringIn, 1000, stdin);
	
	

	printf("------------------- ----------");
	printf("Total: %f\t%f chars\n", total_Chars);
	printf("Distinct: %f\t%f chars\n", total_Distinct);
	printf("Alphabet: %f\t%f chars\n", total_Alphabet);
	printf("Whitespace: %f\t%f chars\n", whiteSpace);
	printf("Digits: %f\t%f chars\n", digits);
	printf("Most occurrences:\n\t%f chars", mostChar, mostCommonChar);
	printf("Least occurrences:\t%f chars\n", leastChar, leastCommonChar);
	printf("------------------- ----------");
	
	
	
	printf("Total Characters in string: %f\n", total_Chars);
	printf("Total Distinct characters in string: %f\n", total_Distinct);
	printf("Total Alphabet characters: %f\n", total_Alphabet);
	printf("Total white space: %f\n", whiteSpace);
	printf("Total digits: %f\n", digits);
	printf("Most common character is %c used %f number of times\n", mostChar, mostCommonChar);
	printf("Least common character is %c used %f number of times\n", leastChar, leastCommonChar);
	

	return 0;
}
