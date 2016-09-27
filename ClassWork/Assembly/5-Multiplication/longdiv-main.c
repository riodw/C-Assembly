/* demo 64/64 bit division
* 2015-11-30
*/

#include <stdio.h>
#include <stdlib.h>

struct quotrem {
	long int quotient, remainder;
};

union bits128 {
	__int128 bits;
	struct quotrem qr;
};

__int128 longdiv(long int, long int);

int main(int argc, char **argv)
{
	long int a, b;
	union bits128 result;
	if(argc != 3) {
		printf("usage: %0 <dividend> <divisor>\n", argv[0]);
		return 1;
	}
	a = strtol(argv[1], NULL, 0);
	b = strtol(argv[2], NULL, 0);
	
	printf("C division, remainder:\n");
	result.qr.quotient = a / b;
	result.qr.remainder = a % b;
	printf("%li / %li = %li, %li\n", a, b, result.qr.quotient, result.
	
	printf("ASM division, remainder:\n");
	result.bits = longdiv(a,b);
	printf("%li / %li = %li, %li\n", a, b, result.qr.quotient, result.
	
	return 0;
}