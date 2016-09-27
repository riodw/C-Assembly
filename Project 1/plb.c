/*
* Hello, World!" program - the Kernighan and Ritchie version.
* plb.c
* COMPSCI 240
* Rio Weber
* 9-3-2015
*/
#include <stdio.h>
int main(int argc, char **argv)
{
	printf( "Hello, ");
	printf( "World!");
	printf( "\n");
	return 0;
}
/*
[rdw77236@bfh103-13 Project1 - HelloWorld]$ gcc -o plb plb.o
[rdw77236@bfh103-13 Project1 - HelloWorld]$ ./plb
Hello, World!
[rdw77236@bfh103-13 Project1 - HelloWorld]$ ls -l
total 58
-rwx------ 1 rdw77236 root 8604 Sep  3 20:08 plb
-rwx------ 1 rdw77236 root  236 Sep  3 20:07 plb.c
-rwx------ 1 rdw77236 root 1648 Sep  3 20:07 plb.o
*/
