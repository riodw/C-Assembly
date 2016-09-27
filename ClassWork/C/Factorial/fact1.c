/*char array example
* Rio Weber
* 9-16-2015
* Perform "rot-13" Caesar cipher. // rotation cyphering
*/
#include<stdio.h>
#include<stdlib.h>

#define MAX 21

int main(int argc, char **argv)
{
	printf("%x  %u  %d  %p\n", 0xf3, 0xf3, 0xf3, 0xf3); //== f3  243  243  0xf3
	
	long unsigned facto[MAX+1] = {1,1}, f;
	unsigned limit, i, j;


	if(argc < 2)
		limit = MAX;
	else {
		limit = atoi(argv[1]); //atoi = ascii to integer - atol = ascii to long
		//if(limit > MAX)
		//	limit = MAX;
		limit = (limit > MAX ? MAX : limit);
	}

	for (i =2; i <= limit; i++) {
		f = i;
		for(j = i-1; j > 0; j--)
			f *= j;
		facto[i] = f;			
	}
	
	for (i = limit; i > 0; i--)
		printf("%2d %39lu\n", i, facto[i]);
		

	return 0;
}
