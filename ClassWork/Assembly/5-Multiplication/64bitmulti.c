/* demo 64x64 bit multiplication
* 2015-11-30
*/
#include<stdio.h>
#include <stdlib.h> 	// strtol()

struct int128 {
	long int lower, upper;
};
union bits128 {
	__int128 bits;
	struct int128 parts;
};

__int128 longprod(long int, long int);

int main(int argc, char **argv)
{
	char fmta[] = "%li * %li = %li(%016Lx)\n";
	char fmtb[] = "%li * %li = %016lx %016lx\n";
	long int a, b;
	union bits128 product;
	
	if(argc != 3) {
		printf("usage: %s <multiplicand> <multiplier>\n", argv[0]);
		return 1;
	}
	a = strtol(argv[1], NULL, 0);
	b = strtol(argv[2], NULL, 0);
	
	printf("C multiplication:\n");	
	product.bits = (__int128)a * (__int128)b;
	printf(fmta, a, b, product.bits, product.bits);
	printf(fmtb, a, b, product.parts.upper, product.parts.lower);
	
	printf("ASM multiplication:\n");
	product.bits = longprod(a,b);
	printf(fmta, a, b, product.bits, product.bits);
	printf(fmta, a, b, product.parts.upper, product.parts.lower);
	
	return 0;
}