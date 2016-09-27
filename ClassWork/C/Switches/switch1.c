/* Switch example
* Rio Weber - CS 240
* 09-14-2015
*/
/*
	switches in C:
		switches depends on a single integer-like value
		constant or variable
	switch uses cases and a default
	cases "fall through" unless
*/

#include<stdio.h>

int main(int argc, char **argv)
{
	char letter;
	unsigned i;

	for(i = 0; i < 6; i++) {
		printf("letter? ");
		letter = getchar();
		switch(letter) {
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				printf("vowel\n");
				break;
			case '\n':
				printf("newline\n");
				break;
			default:
				printf("not a vowel\n");
		}
		letter = getchar();
		if(letter != '\n')
			ungetc(letter, stdin);
		//do {
		//	letter = getchar();
		//} while(letter != '\n');
	}
	return 0;
}









