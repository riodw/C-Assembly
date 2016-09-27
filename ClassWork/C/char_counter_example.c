/*Character Counter
* 2015-09-28
* Rio Weber
*/

#include <stdio.h>
#include <string.h> //strlen()
#include <limits.h> // UNIT_MAX
#include <ctype> // isAlpha

int main(int argc, char **argv)
{
	unsigned ascii[256];
	unsigned i, j;
	char buffer[1024];
	char *retval;
	unsigned nFewest = UINT_MAX;
	char fewest;
	unsigned nChar = 0;
	
	for(i = 0; i < 256; i++)
		ascii[i] = 0;

	printf("Enter text, of CTRL-D\n");
	while(1) {
		retval = fgets(buffer, 1024, stdin);
		if(retval == 0)
			break;
			
		for(j = 0; j < strlen(buffer); j++)
			ascii[buffer[j]]++;
	}
	
	for(i = 0; i < 256; i++)
		if(ascii[i] > 0 && ascii[i] < nFewest) {
			nFewest = ascii[i];
			fewest = i;
		}
		if(isalpha(i)
			nChars = 
		
	printf("The %c (%#02x) character occurred %u times.\n", fewest, fewest, nFewest);
		
	return 0;
}












// short answer
what is the command to compile the c program

gcc -Wall -o

What flag to add to compile program that uses math lib

what header to include for strings (string.h)

write a c statement that will hold your name

copy one array into another (loop)

discription of functin and prototype (write the function)

write a compleate c programm (comments, main, switch statement, print hello world return0)

floating point numbers
nested loops

8-10 questions
all time to take it






















