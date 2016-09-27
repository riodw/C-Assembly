/* Contert Command line binary strings ('bitstrings') to decimal values
* 2015-10-07
* Rio Weber
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

long unsigned b3decRL(char *digits, unsigned base);
long unsigned b3decLR(char *digits, unsigned base);

int main(int argc, char ** argv)
{
	long unsigned decimal;
	char digits[65];
	unsigned i;
	unsigned base;
	
	for(i=1; i < argc; i += 2)
	{ // start at 1 bc 0 is the program name
		if(atoi(argv[i]) > 20) {
			i++;
			continue; //breaks out current iteration of the loop, will come back
		}
		base = atoi(argv[i]);
		strncpy(digits, argv[i], 65);
		
		decimal = b3decRL(digits, base);
		// binary = long (hex, octal)
		printf("RL: %s = %lu (%02lx, %03lo)\n", digits, decimal, decimal, decimal);
		
		decimal = b3decLR(digits, base);
		// binary = long (hex, octal)
		printf("LR: %s = %lu (%02lx, %03lo)\n", digits, decimal, decimal, decimal);
		
		printf("\n");
	}
	return 0;
}

long unsigned b3decRL(char *digits, unsigned base)
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

long unsigned b3decLR(char *digits, unsigned base)
{
	long unsigned d = 0; // holds sum
	char *b;
	
	for(b = digits; *b != '\0'; b++) {
		d *= base;
		
		if(*b >= '0' && *b <= '9')
			d += (*b - '0');
		else if(*b >= 'a' && *b <= 'z')
			d += (*b - 'a' + 10);
		else if(*b >= 'A' && *b <= 'Z')
			d += (*b - 'A' + 10);
	}
	return d;
}



// ./b1 
