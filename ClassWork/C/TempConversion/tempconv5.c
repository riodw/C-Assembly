/* temp converter w/ cmd-line input
* Rio Weber
* Sep, 2 2015
* */

#include <stdio.h>
#include <stdlib.h> // for atof()

int main(int argc, char *argv[])
{
	int i;
	float f, c;

	for (i=0; i < argc; i++) {
		c = atof( argv[i] );
	
		f = c * 9.0/5.0 + 32;
		printf("%f\t%f\n", c, f);
	}
	return 0;
}
