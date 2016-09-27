/* Contert Command line binary strings ('bitstrings') to decimal values
* 2015-10-07
* Rio Weber
*/
#include <stdio.h>
#include <string.h>

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
		if(atoi(argv[i] > 20) {
			i++;
			continue; //breaks out current iteration of the loop, will come back
		}
		base = atoi(argv[i]);
		strncpy(bits, argv[i], 65);
		
		decimal = b3decRL(digits);
		// binary = long (hex, octal)
		printf("RL: %s = %lu (%02lx, %03lo)\n", bits, decimal, decimal, decimal);
		
		decimal = b3decLR(digits);
		// binary = long (hex, octal)
		printf("LR: %s = %lu (%02lx, %03lo)\n", bits, decimal, decimal, decimal);
		
		printf("\n");
	}
	return 0;
}

long unsigned b3decRL(char *digits, unsigned base)
{
	long unsigned d = 0; // holds sum
	char *b;
	unsigned power = 1;
	
	for(b = bits + strlen(bits) -1; b >= bits; b--) {
		switch (*b) {
			case 'B':
			case 'b': d += 11 * power; break;
			case 'A':
			case 'a': d += 10 * power; break;
			case '9': d += 9 * power; break;
			case '8': d += 8 * power; break;
			case '7': d += 7 * power; break;
			case '6': d += 6 * power; break;
			case '5': d += 5 * power; break;
			case '4': d += 4 * power; break;
			case '3': d += 3 * power; break;
			case '2': d += 2 * power; break;
			case '1': d += 1 * power; break;
			d += power;
		}
		power *= base;
	}
	return d;
}

long unsigned b3decLR(char *digits, unsigned base)
{
	long unsigned d = 0; // holds sum
	char *b;
	
	for(b = bits; *b != '\0'; b++) {
		d *= 2;
		if(*b == '1')
			d++;
	}
	
	return d;
}



// ./b1 
