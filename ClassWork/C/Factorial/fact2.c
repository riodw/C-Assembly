/*char array example
* Rio Weber
* 9-16-2015
* Perform "rot-13" Caesar cipher. // rotation cyphering
*/
#include<stdio.h>
#include<stdlib.h>

#define MAX 21
// & = address of
// * = dereference; element at that element

int main(int argc, char **argv)
{
	printf("%x  %u  %d  %p\n", 0xf3, 0xf3, 0xf3, 0xf3); //== f3  243  243  0xf3
	
	long unsigned facto[MAX+1] = {1,1}, f;
	unsigned limit;
	long unsigned *pi, *pj;


	if(argc < 2)
		limit = MAX;
	else {
		limit = atoi(argv[1]); //atoi = ascii to integer - atol = ascii to long
		//if(limit > MAX)
		//	limit = MAX;
		limit = (limit > MAX ? MAX : limit);
	}

	for (pi = facto + 2; pi <= facto+limit; pi++) {
		f = 1;
		for(pj = pi; pj > facto; pj--) {
			printf(" %lu\n", *pj);
			f *= (pj-facto); // f *= the element that pj points to;
		}
		*pi = f;			
	}
	
	for (pi = facto + limit; pi > facto; pi--)
		printf("%p %39lu\n", pi, *pi);
		

	return 0;
}

void fill_array(float *ary, unsigned size)
{
	float *pi;
	for(pi = ary; pi < ary + size; pi++)
		*pi = 0.01;
}

float *split_array(float *ary, unsigned size)
{
	return ary + size >> 1; // right shifing number by 1= dividing by two
}













