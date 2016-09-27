/*
Input / Output
We supply input that should come from the keyboard, from a text file instead.
We send output to a text file instead of to the screen.
This lets us use files with programs that are using stdin and srdout.
-We do this on the command line using the characters "<" for input and ">" for output.
*/
/*simple I/O demonstrator
* Rio Weber
* 9-16-2015
* Perform "rot-13" Caesar cipher. // rotation cyphering
*/
#include<stdio.h>
#include<string.h>
void rot13(char *ct, char *pt)
{
	int i;
	char c;
	for(i = 0; i <= strlen(pt); i++) {
		if(pt[i] >= 'a' && pt[i] <= 'z')
		{
			c = ( (pt[i] - 'a' + 13) % 26) + 'a';
			ct[i] = c;
		} 
		else if (pt[i] >= 'A' && pt[i] <= 'Z')
		{
			c = ( (pt[i] - 'A' + 13) % 26) + 'A';
			ct[i] = c;
		}
		else ct[i] = pt[i];
	}
}
int main(int argc, char **argv)
{
	char plaintext[1000] = " ";
	char ciphertext[1000] = " ";
	char *retcode;

	do {
		fgets(plaintext, 1000, stdin);
		rot13(ciphertext, plaintext);
		printf("-%s-\n", ciphertext);
	} while (retcode != NULL && plaintext[0] != '\n');
	return 0;
}





