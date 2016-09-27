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
	
	int total_Chars = 0;
	int total_Distinct = 0;
	int total_Alphabet = 0;
	int whiteSpace = 0;
	int digits = 0;
	int mostCommonChar = 0, leastCommonChar = 0;

	fgets(stringIn, 1000, stdin);
	
	int i;
	int charcount;

	charcount = 0;
	for(i=0; stringIn[i]; i++) {
		if(stringIn[i] == ' ' || stringIn[i] == '\t' || stringIn[i] == '\n')
		{
			whiteSpace++;
		}
		
		if(stringIn[i] == 'a' || stringIn[i] == 'b' || stringIn[i] == 'c')
		{
			total_Alphabet++;
		}
		
		total_Chars++;
	}
	
	printf("%d", charcount);
	
	

	printf("------------------- ----------\n");
	printf("Total: \t%d chars\n", total_Chars);
	printf("Distinct: \t%d chars\n", total_Distinct);
	printf("Alphabet: \t%d chars\n", total_Alphabet);
	printf("Whitespace: \t%d chars\n", whiteSpace);
	printf("Digits: \t%d chars\n", digits);
	printf("Most occurrences:\t%d chars\n", mostCommonChar);
	printf("Least occurrences:\t%d chars\n", leastCommonChar);
	printf("------------------- ----------\n");
	

	return 0;
}
