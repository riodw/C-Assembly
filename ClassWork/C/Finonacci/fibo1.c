/*Fibonacci Series
* 2015-09-28
* 
*/

#include <stdio.h>
#include <stdlib.h>

#define N_ELEMENTS 100

void fill_fibo(unsigned long *f, unsigned size) //"*f" pointer to first ememelt
{
	unsigned i;
	for(i = 2; i < size; i++)
		f[i] = f[i-1] + f[i-2];
	
}

int main(int argc, char **argv)
{
	unsigned long fibonacci[N_ELEMENTS] = {0, 1};
	unsigned s, i;
	
	fill_fibo(fibonacci, N_ELEMENTS); // takes array_name, size
	if(argc != 2) // checks for user input from command line
		s = N_ELEMENTS;
	else {
		s = atoi(argv[1]); 
	// will take first element of argv and convert it from ASCII to int 
	//must include standard Library <stdlib> for "atoi()"
		if(s > N_ELEMENTS)
			s = N_ELEMENTS;
	}
	
	for(i = 0; i < s; i++)
	{
		printf("%2u  %20lu\n", i, fibonacci[i]);
	}
	return 0;
}

//
