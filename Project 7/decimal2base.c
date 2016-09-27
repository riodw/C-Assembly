/*
 * Project 7:
 *  - signed, fixed-point conversions. 
 * Rio Weber
 * November, 10 2015
 * 
 * Works for most input
 */
 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int length(long int decimal);

void base2Dec(long int decimal, char *bitstring, int base);
void right2Dec(long int decimal, char *bitRight, int base);
void reverse(char *bitstring);

int main(int argc, char **argv)
{
	long int decimal = 1;
	int base = 10;
	char bitstring[33];
	char bitLeft[33];
	char bitRight[33];
	
	int i = 0; // counter
	int strLength = 0; // length of input string
	
	printf("Enter a decimal value, and a desired base: \n");
	scanf(" %s %d", bitstring, &base);
	// set strLength to length of input string
	strLength = strlen(bitstring);
	
	for(i; i < strLength; i++)
	{
		if(bitstring[i] == '.')
		{
			break; // go till decimal point
		}
		bitLeft[i] = bitstring[i]; // set bitLeft =to bitstring
	}
	
	// set ending terminator for bitLeft
	bitLeft[i] = '\0';
	
	if(i < strLength)
	{
		for(i += 1; i < strLength; i++)
		{
			bitRight[i - strLength - 1] = bitstring[i];
		}
	}
	
	// set ending terminator for bitRight
	bitRight[i] = '\0';
	
	decimal = atoi(bitLeft);
	base2Dec(decimal, bitLeft, base);
	reverse(bitLeft);
	decimal = atoi(bitRight);
	right2Dec(decimal, bitRight, base);
	
	printf("%s (base-10) is equal to %s.%s (base-%d)\n\n", bitstring, bitLeft, bitRight, base);
	
	return 0;
}

// Convert the portion of the input right of the decimal to base 10
void base2Dec(long decimal, char *bitstring, int base)
{
	// for HEX values
	char digits[] = {"0123456789ABCDEF"};
	long int quotient;
	int remain;
	char *dst = bitstring;
	do {
		remain = decimal % base;
		quotient = decimal / base;
		*dst = digits[remain];
		dst++;
		decimal = quotient;
	} while(decimal != 0);
	
	// set the end of teh array
	*dst = '\0';
}

// Convert the portion of the input right of the decimal to base 10
void right2Dec(long int decimal, char *bitRight, int base)
{
	char buffer[2];
	int temp, i;
	double number = decimal / pow(10.0, strlen(bitRight));
	for(i = 0; i < 16; i++)
	{
		number *= base;
		temp = number;
		sprintf(buffer, "%d", temp);
		buffer[1] = '\0';
		bitRight[i] = buffer[0];
		number -= temp;
		
		if(number == 0) { break; }
	}
	
	// set the end of teh array
	i++;
	bitRight[i] = '\0';
}


// So the output is in the right order
void reverse(char *bitstring)
{
	int length = strlen(bitstring);
	char *e = bitstring + length - 1;
	do {
		char t;
		t = *bitstring, *bitstring = *e, *e = t;
		bitstring++;
		e --;
	} while(bitstring < e);
}





