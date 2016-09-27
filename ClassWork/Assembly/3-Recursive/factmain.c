/* factorial driver
 * 2015-11-18
 */
 
#include<stdio.h>
#include<stdlib.h> 	// atoi()

long unsigned fact(long unsigned n);

int main(int argc, char **argv)
{
	unsigned i;
	long unsigned n, f;
	for(i=1; i < argc; i++)
	{
		n = atoi(argv[i]);
		f = fact(n);
		printf("fact(%2lu) is %lu\n", n, f);
	}
	return 0;
}