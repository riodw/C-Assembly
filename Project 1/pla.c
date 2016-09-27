/*
* Hello, World!" program - the Kernighan and Ritchie version.
* pla.c
* COMPSCI 240
* Rio Weber
* 9-3-2015
*/
#include <stdio.h>
int main(int argc, char **argv)
{
	printf( "Hello, World!\n");
	return 0;
}
/*
[rdw77236@bfh103-13 Project1 - HelloWorld]$ gcc -Wall -c pla.c
[rdw77236@bfh103-13 Project1 - HelloWorld]$ gcc -o pla pla.o
[rdw77236@bfh103-13 Project1 - HelloWorld]$ ./pla
Hello, World!
[rdw77236@bfh103-13 Project1 - HelloWorld]$ ls -l
total 35
-rwx------ 1 rdw77236 root 8549 Sep  3 20:00 pla
-rwx------ 1 rdw77236 root  536 Sep  3 20:00 pla.c
-rwx------ 1 rdw77236 root 1512 Sep  3 20:00 pla.o
*/
