/* driver for mystrlen()
	11/16/2015
*/
#include <stdio.h>

long unsigned mystrlen(char *str);

int main(int argc, char **argv)
{
	unsigned i;
	for (i=0; i < argc; i++)
		printf("%lu %s\n", mystrlen(argv[i]), argv[i]);
	
	return 0;
}