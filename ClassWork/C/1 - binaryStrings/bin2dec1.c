/* Contert Command line binary strings ('bitstrings')
* to decimal values
* 2015-10-07
*/
#include <stdio.h>
#include <string.h>

long unsigned bin2decRL(char *bits);
long unsigned bin2decLR(char *bits);

int main(int argc, char ** argv)
{
	long unsigned decimal;
	char bits[65];
	unsigned i;
	
	for(i=1; i < argc; i++)
	{ // start at 1 bc 0 is the program name
		if(strlen(argv[i]) > 64)
			continue; //breaks out current iteration of the loop, will come back
		strncpy(bits, argv[i], 65);
		
		decimal = bin2decRL(bits);
		// binary = long (hex, octal)
		printf("RL: %s = %lu (%02lx, %03lo)\n", bits, decimal, decimal, decimal);
		
		decimal = bin2decLR(bits);
		// binary = long (hex, octal)
		printf("LR: %s = %lu (%02lx, %03lo)\n", bits, decimal, decimal, decimal);
		
		printf("\n");
	}
	
	return 0;
}

long unsigned bin2decRL(char *bits)
{
	long unsigned d = 0; // holds sum
	char *b;
	unsigned powerof2 = 1;
	
	for(b = bits + strlen(bits) -1; b >= bits; b--) {
		//printf("%c", *b);
		if(*b == '1')
			d += powerof2;
			
		powerof2 *= 2;
	}
	
	return d;
}

long unsigned bin2decLR(char *bits)
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
