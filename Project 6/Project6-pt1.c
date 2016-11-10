/* Conversions of Unsigned Numbers - Pt.1
* Decimal-to-base Conversion
* PROJECT 6 - pt 1
* 2015-10-07
* Rio Weber
*/
#include <stdio.h>
#include <string.h>

void int2base(long int decimal, char *integer, int base);
void reverse(char *str);
int string_length(char*);

int main(int argc, char ** argv)
{
	long int decimal;
	int base;
	char integer[65] = "";

	printf("Enter a decimal value, and a desired base: ");

	scanf(" %lu", &decimal);
	scanf(" %d", &base);

	int2base(decimal, integer, base);
	reverse(integer);

	printf("\n%ld equals %s (base-%d)\n", decimal, integer, base);

	return 0;
}

void int2base(long int decimal, char *integer, int base)
{
	
	char base_digits[16] = {'0', '1', '2', '3', '4', '5', '6', '7','8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

	if (base < 2 || base > 16)
		{ *integer = '0'; return; }

	if (decimal == 0)
		{ *integer = '0'; return; }

	int quotient = decimal;

	int i = 0;
	do {
		integer[i] = base_digits[ ( quotient % base ) ];
		quotient = quotient / base;
		i++;
	} while(quotient != 0);

	if ( decimal < 0 && base == 10) *integer++ = '-';

}

void reverse(char *string) 
{
   	int length, c;
   	char *begin, *end, temp;
 
   	length = string_length(string);
   	begin  = string;
   	end    = string;
 
    for (c = 0; c < length - 1; c++)
      	end++;
 
    for (c = 0; c < length/2; c++)
    {
		temp   = *end;
      	*end   = *begin;
      	*begin = temp;
      	begin++;
      	end--;
    }
}
 
int string_length(char *pointer)
{
   	int c = 0;
 
   	while( *(pointer + c) != '\0' )
      	c++;
 
   	return c;
}




// ./o decimal_number base
