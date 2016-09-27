/*
 * Project 7:
 *  - signed, fixed-point conversions. 
 * Rio Weber
 * November, 10 2015
 * 
 */
 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

// turns input Base to Base 10
long unsigned base2Dec(char *bitstring, unsigned base);

int main(int argc, char **argv)
{
	unsigned base = 10;
	char tempBitstring[65];
	char bitstring[65];
	char sign;
	int i;
	long unsigned result;

	printf("Enter a value, and the base it is in: \n");
	scanf("%s %u", tempBitstring, &base);

	// is the number Negative
	if(tempBitstring[0] == '-')
	{
		sign = '-';
		i = 1;
	}
	// if not negative then the number is Positive
	else {
		sign = '+';
		i = 0;
	}

	if(i == 1)
	{
		for(; i < strlen(tempBitstring); i++)
			bitstring[i - 1] = tempBitstring[i];
	}
	
	else {
		for(; i < strlen(tempBitstring); i++)
			bitstring[i] = tempBitstring[i];
	}
	
	// set ending terminator for bitstring
	bitstring[i] = '\0';
	
	// get result of conversion
	result = base2Dec(bitstring, base);
	
	//printf("Bitstring = %s\n", bitstring);
	printf("%s (base-%u) is equal to %c%lu (base-10)\n", bitstring, base, sign, result);

	return 0;
}

// base2Dec (input number, base of the number)
long unsigned base2Dec(char *bitstring, unsigned base)
{
	unsigned long value = 0;
	char *end = bitstring + strlen(bitstring) - 1;
	unsigned power = 0;

	// do the conversion
	do {
		char temp = *end;
		int number = temp - '0';

		value += number * pow(base, power);
		end--;
		power++;

	} while(power < strlen(bitstring));

    return value;
}