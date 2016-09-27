/*char array example
* Rio Weber
* 9-16-2015
* Perform "rot-13" Caesar cipher. // rotation cyphering
*/
#include<stdio.h>
#include<string.h>

int main(int argc, char **argv)
{
	char bfr[100];
	char *i;

	printf("Enter your name: ");
	//scanf(" %100s", bfr);
	fgets(bfr, 100, stdin);
	//bfr[ strlen(bfr) -1 ] = '\0'; // get rid of "\n"
	i = index(bfr, '\n'); // OR get rid of "\n"
	*i = '\0';

	printf("Your name is ->%s<-\n", bfr);

	printf("string length: %u; array size: %lu\n"),
		(unsigned)strlen(bfr), sizeof(bfr);

	return 0;
}
