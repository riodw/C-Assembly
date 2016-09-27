/* temp converter
* Rio Weber
* Sep, 2 2015
* */

#include <stdio.h>
#include <stdlib.h> // for atof()

int main(int argc, char *argv[])
{
	float f, c;
	
	c = atof( argv[1] );

	
	f = c * 9.0/5.0 + 32;
	printf("%f\t%f\n", c, f);

	return 0;
}
