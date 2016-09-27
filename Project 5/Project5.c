/*
* String Pointers - Projct 5
* Rio Weber
* 10/2/2015
* CS 240
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// for counting the length
int length(char *cInput)
{
    int totalChars = 0;
    while ( *(cInput++) != '\0')  // till end of string
        totalChars++;

    return totalChars;
}

// for converting to lower
void lower(char *cOutput, char *cInput)
{
    char c;
    int i;
    for (i = 0; *cInput != '\0'; cInput++) {
        c = *cInput;
        if (c >= 'A' && c <= 'Z')
            c += 0x20;  // convert to lower case
        *cOutput = c;
        cOutput++;
    }
    *cOutput = '\0'; // end of string
}

// for converting to upper
void upper(char *cOutput, char *cInput)
{
    char c;
    int i;
    for (i = 0; *cInput != '\0'; cInput++) {
        c = *cInput;
        if (c >= 'a' && c <= 'z')
            c -= 0x20; // convert to upper case
        *cOutput = c;
        cOutput++;
    }
    *cOutput = '\0';  // end of string
}

//for converting to caps
void caps(char *cOutput, char *cInput)
{
    int newWord = 1;
    char c;
    int i;
    for (i = 0; *cInput != '\0'; cInput++, cOutput++) {
        c = *cInput;
        if (isspace(c))
            newWord = 1;
        else if (newWord) {
            newWord = 0;
            if ((c >= 'a') && (c <= 'z'))
                c -= 0x20;
        }
        *cOutput = c;
    }
    *cOutput = '\0';
}

// MAIN
int main(int argc, char **argv)
{
    char number;
    char cInput[3000], cOutput[2002];
    int total = 0;

    //0: length; 1: lower; 2: upper; 3: caps.
    fgets(cInput, 2001, stdin);
    number = cInput[0];

    while (fgets(cInput, 2002, stdin) != NULL)
    {
        if (number == '0')
            total += length(cInput); // Total

        else if (number == '1')
            lower(cOutput, cInput); // Lower

        else if (number == '2')
            upper(cOutput, cInput); // Upper

        else if (number == '3')
            caps(cOutput, cInput); // Capitals

        printf(cOutput);
    }

    if (number == '0')
        printf("total length: %u\n", total);
    
    printf("\n");
    return 0;
}

// cInput 1
/*
0
aBcDe
ab

A123$%^C
a
AbCdE

abcd efgh ijKL mnoP qrst luvw $xyz
*/