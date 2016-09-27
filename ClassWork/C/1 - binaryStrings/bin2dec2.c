/* Contert Command line binary strings ('bitstrings')
* to decimal values
* 2015-10-07
*/
#include <stdio.h>
#include <string.h>

long unsigned bin2decRL(char *bits);

int main(int argc, char ** argv)
{
	
	long unsigned decimal;
	char bits[65];
	unsigned i;
	
	for(i=1; i < argc; i++) { // start at 1 bc 0 is the program name
		if(strlen(argv[i]) > 64)
			continue; //breaks out of current iteration of the loop, will come back
		strncpy(bits, argv[i], 65);
		
		decimal = bin2decRL(bits);
		printf("%s = %lu (%02lx, %03lo)\n", bits, decimal, decimal, decimal);
	}
	
	return 0;
}

long unsigned bin2decRL(char *bits)
{
	long unsigned d = 0;
	char *b;
	unsigned powerof2 = 1;
	for(b=bits + strlen(bits) -1; b >= bits; b--) {
		printf("%c", *b);
		//if(*b == '1')
		//	d += powerof2;
		d += (*b == '1' ? powerof2 :0 );
		powerof2 *= 2;
	}
	printf("\n");
	return d;
}

// ./b1 
