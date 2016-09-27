/*
* Project 2 - character strings
* P2File5.c
* COMPSCI 240
* Rio Weber
* 9-13-2015
===========COMPLEATED
*/
#include <stdio.h>
#include <string.h>

void myStrcat(char [], char []);

int main(int argc, char **argv)
{
	static char string[256];
	static char inputString[256];
	static char tempString[1];
	
	for(;;)
	{
		printf("Your input: ");
		
		fgets(inputString, 255, stdin);
		if(strcmp(inputString,"\n") == 0)
			break; // break if line entered is "nothing"


		int inputlength = 0;
    		while(inputString[inputlength]!='\0')  //  find the length of the next input
    		{
        		inputlength++; // add to new input length
		}
		inputlength--; // sub 1 for the newLine Character

		int length = 0;
    		while(string[length]!='\0')  // find the total length of the string
    			length++; // add to total Length
		

		if(inputlength + length >= 255) // check if the inputLength and the total Length are over the max amount
		{ // if it is over the max amount:
			int extra = 255 - length; // get the amount over
			int i;
			for(i = 0; i < extra; i++)
			{
				tempString[0] = inputString[i]; // put next character in tempString[0]
				myStrcat(string, tempString); // add the char to the total Sting
			}
			// total string now has the max amount
			break; // BREAK
		}
		// if the last input did not make the total more than the max amount && last input was NOT "nothing"
		else
		{
			strtok(inputString, "\n"); // remove the "\n" (new line) from fgets()
			myStrcat(string, inputString);  // add the new input to the total string
		}
	}

	//if input has reached max OR input was blank
	printf("\n%s\n", string); // print string

	return 0;
}

// function for adding two strings
void myStrcat(char string1[], char string2[])
{
	int s1, s2;
	s1 = 0;
	while(string1[s1] != '\0')
		s1++; // finding length of Total String next loop won't overwrite whats already in the string

	s2 = 0;
	while (string2[s2] != '\0')
	{
		string1[s1] = string2[s2]; // add to the end of Total String
		s2++;
		s1++;
	}
	string1[s1] = '\0'; // HOW COULD I FORGET!? smh
}

















