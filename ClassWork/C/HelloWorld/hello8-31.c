/* minimal hello example
* Rio Weber
* Aug, 31 2015
* */

#include <stdio.h>
int main(int argc, char**argv)
{
	FILE * fyl; // File handle
	//fyl = fopen("sample.txt", "a"); // makes new file names sample.txt /a = append /w = write
	fyl = stdout; //standard out
	puts("hello, world");
	puts("goodbye");
	
	fputs("hello, world", fyl);
	fputs("goodbye\n", fyl);
	fclose(fyl); //close the file

	return 0;
}
