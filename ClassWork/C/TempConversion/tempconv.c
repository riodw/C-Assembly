/* temp converter
* Rio Weber
* Aug, 31 2015
* */

#include <stdio.h>
int main(int argc, char **argv)
{
	unsigned int i;
	float f, c;

	for(i = 0; i < 6; i++)
	{
		c = i * 7.0 - 14.0;
		f = c * 9.0/5.0 + 32;
		printf("%f\t%f\n", c, f);
	}

	return 0;
}
