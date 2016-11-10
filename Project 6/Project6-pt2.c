/* Conversions of Unsigned Numbers - Pt.2
* Base-to-decimal Conversion
* PROJECT 6 - pt 2
* 10/18/2015
* Rio Weber
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

long unsigned b3decRL(char *digits, int base);

int main(int argc, char **argv)
{
	long unsigned decimal;
	char digits[65];
	int base;

	printf("Enter a value, and a desired base: ");

	scanf(" %s", &digits);
	scanf(" %d", &base);
		
	decimal = b3decRL(digits, base);

	printf("\n%s (base-%d) equals %lu \n", digits, base, decimal);	

	return 0;
}

long unsigned b3decRL(char *digits, int base)
{
	long unsigned d = 0; // holds sum
	char *b;
	unsigned power = 1;
	
	for(b = digits + strlen(digits) -1; b >= digits; b--) {
		if(*b >= '0' && *b <= '9')
			d += power * (*b - '0');
		else if(*b >= 'a' && *b <= 'z')
			d += power * (*b - 'a' + 10);
		else if(*b >= 'A' && *b <= 'Z')
			d += power * (*b - 'A' + 10);
			
		power *= base;
	}
	return d;
}



// ./b1 number base
