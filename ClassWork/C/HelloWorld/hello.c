/* Hello word! 
* 8-26-2015
* Rio Weber
*/
// ls-l = file properties "-rwx---" and "total 17"


// $ gcc -Wall -o hello hello.c
// gcc	 = name of the compiler
// -Wall = tells us of any warnings
// -o 	 = output
// hello = new executible file called hello
// "./" must be used to prefix the compiled file to exicute it "$ ./hello"

//gcc -Wall -c hello.c
// -c 	 = compile only
// -g	 = save symbol table for debugging

#include<stdio.h> // standard (input/output) So sommon dont need a comment

int main(int argc, char **argv) //main arguments from OS (on Linux) windows does not usually
{
	printf("Hello, World!\n");
	
	return 0;
}
