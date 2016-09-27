/*
* Hello, World!" program - the Kernighan and Ritchie version.
* pld.c
* COMPSCI 240
* Rio Weber
* 9-3-2015
*/
#include <stdio.h>
int main(int argc, char **argv)
{
	char z = 'H';
	
	putchar (z);
	z = 'e';
	putchar (z);
	z = 'l';
	putchar (z);
	z = 'l';
	putchar (z);
	z = 'o';
	putchar (z);
	z = ',';
	putchar (z);
	z = ' ';
	putchar (z);
	z = 'W';
	putchar (z);
	z = 'o';
	putchar (z);
	z = 'r';
	putchar (z);
	z = 'l';
	putchar (z);
	z = 'd';
	putchar (z);

	puts( "\n");

	return 0;
}
/*
[rdw77236@bfh103-13 Project1 - HelloWorld]$ ./pld
Hello, World

[rdw77236@bfh103-13 Project1 - HelloWorld]$ ls -l
total 100
-rwx------ 1 rdw77236 root 8602 Sep  3 20:28 pld
-rwx------ 1 rdw77236 root  489 Sep  3 20:28 pld.c
-rwx------ 1 rdw77236 root 2000 Sep  3 20:28 pld.o
*/
