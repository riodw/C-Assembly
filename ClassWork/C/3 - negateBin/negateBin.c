/*Negate a binary number
* Rio Weber
* 10/14/2015
*/
#include <stdio.h>
#include <string.h> //strncpy()

void invert(char *dst, char *src);
void negate(char *dst, char *src);

int main(int argc, char **argv)
{
	unsigned i;
	
	char bits[65], negated[65];
	
	for(i=1; i < argc; i++)
	{
		strncpy(bits, *(argv+i), 65);
		invert(negated, bits);
		printf("- %s --> %s\n", bits, negated);
	}
	
	return 0;
}

void invert(char *dst, char *src)
{
	//ended by a null char- assumes all input is 1, 0s
	do {
		if(*src == '0')
			*dst = '1';
		else if (*src == '1')
			*dst = '0';
		else
			*dst = *src;
			
		src++;
		dst++;
	} while(*(src-1) != '\0');
	*dst = '\0';
}

void negate(char *dst, char *src)
{
	
}
