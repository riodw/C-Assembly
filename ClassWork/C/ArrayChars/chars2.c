#include <stdio.h>
#include <string.h> // strlen()
#include <stdlib.h> // malloc()

int main(int argc, char **argv)
{
	unsigned size;
	char *bfr;
	char b2[8];
	//char junk;

		
		printf("How big a string buffer? ");
		//scanf(" %u", &size);
		//fgets(bfr, size, stdin);
		//junk = getchar();
		//if(junk != '\n')
		//	ungetc(junk, stdin);
		fgets(b2, 8, stdin);
		size = atoi(b2);

		//free(bfr); // freeing buffer before it's alocated "Segmentation fault (core dumped)"
		bfr = malloc(size * sizeof(char)); // dynamicaly allocate buffers

		//printf("%p\n", *bfr); // prints "(nil)"

		printf("What is your name? ");
		fgets(bfr, size, stdin);
		printf("Your name is ->%s<- stored at %p\n", bfr, bfr);

		//printf("Size of buffer: %lu; bfr value: %020p\n", sizeof(bfr), bfr);
		//printf("Size of size: %lu; bfr value: %020p\n", sizeof(size), &size);

		free(bfr);

	return 0;
}
