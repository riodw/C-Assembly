/* type sizes
* 9-9-2015
*/
#include <stdio.h>
#include <limits.h>

int main(int argc, char **argv)
{
	printf("0: \t %lu\n", sizeof(0));

	printf("short: \t %lu", sizeof(short));
	printf("\t%i\t%i\n", SHRT_MAX, SHRT_MIN);

	printf("int: \t %lu", sizeof(int));
	printf("\t%i\t%i\n", INT_MAX, INT_MIN);
	printf("unsigned: \t %lu", sizeof(unsigned));
	printf("\t%u\n\n", UINT_MAX);

	printf("long: \t %lu", sizeof(long));
	printf("\t%li\t%li\n", LONG_MAX, LONG_MIN); // need the %li for long
	printf("long unsigned: \t %lu", sizeof(long unsigned));
	printf("\t%lu\n\n", ULONG_MAX);

	printf("char: \t %lu", sizeof(char));
	printf("\t%hi\t%hi\n", CHAR_MAX, CHAR_MIN); // need the %li for long
	printf("unsigned char: \t %lu", sizeof(unsigned char));
	printf("\t%hi\n\n", UCHAR_MAX);

	printf("int: \t %lu", sizeof(long long int));
	printf("\t%Li\t%Li\n", LLONG_MAX, LLONG_MIN);
	printf("unsigned: \t %lu", sizeof(long long unsigned));
	printf("\t%Li\n\n", ULLONG_MAX);

	unsigned char a, b, c;

	a = 'a';
	b = 'z';
	c = b - a;
	printf("a: %u %02x %c\n", a, a, a);
	printf("b: %u %02x %c\n", b, b, b);
	printf("c: %u %02x %c\n", c, c, c);

	return 0;
}
