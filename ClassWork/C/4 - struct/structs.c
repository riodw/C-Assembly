/* Program to Inspect IEEE-754
 * 2015-10-26
 */
 #include <stdlib.h>
 #include <stdio.h>
 
struct ieee754 {
	// unsigned take up 4 bytes
	// 2 bytes for sign - 2 bytes for significand - 2 bytes for exponent

	unsigned significand : 23;
	unsigned exponent : 8;
	unsigned sign : 1; // only use 1 bit
};

union floater {
	struct ieee754 fp; //fp = floating point
	float f;
	unsigned u;
	char c[4]; // currently 4 bytes = change to 5 and ...
	// as big as its biggest member - rounding up to 8 bytes
};

int main(int argc, char **argv)
{
	union floater u;
	unsigned i, j;
	
	for(i = 1; i < argc; i++)
	{
		u.f = atof(argv[i]);
		printf("float: %f\n", u.f);
		printf("parts: %x %02x %04x\n", u.fp.sign, u.fp.exponent, u.fp.significand);
		
		for(j = 0; j < 4; j++)
			printf("%02x ", (unsigned)u.c[j]);
		
			
		printf("\n");
		printf("unsigned: %08x\n\n", u.u);
			
	}
	
	printf("Struct: %lu bytes\n", sizeof(struct ieee754));
	printf("Float:  %lu bytes\n", sizeof(float));
	printf("Union:  %lu bytes\n", sizeof(union floater));
	

	return 0;
}
/*
./s1 0 1 2.5 3.5 -4.25
float: 0.000000
parts: 0 00 0000
00 00 00 00 
unsigned: 00000000

float: 1.000000
parts: 0 7f 0000
00 00 ffffff80 3f 
unsigned: 3f800000

float: 2.500000
parts: 0 80 200000
00 00 20 40 
unsigned: 40200000

float: 3.500000
parts: 0 80 600000
00 00 60 40 
unsigned: 40600000

float: -4.250000
parts: 1 81 80000
00 00 ffffff88 ffffffc0 
unsigned: c0880000

Struct: 4 bytes
Float:  4 bytes
Union:  4 bytes
*/


/*
EXAM 2:

field sized for binary 32 and 64

how many bits are used for the sign exponent and significand

conversions with binary and unsigned binary

*/
