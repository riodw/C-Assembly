/*
* Hello, World!" program - the Kernighan and Ritchie version.
* plc.c
* COMPSCI 240
* Rio Weber
* 9-3-2015
*/
#include <stdio.h>
int main(int argc, char **argv)
{
	puts( "Hello, ");
	puts( "World!");
	puts( "\n");
	return 0;
}
/*
[rdw77236@bfh103-13 Project1 - HelloWorld]$ gcc -Wall -c plc.c
[rdw77236@bfh103-13 Project1 - HelloWorld]$ gcc -o plc plc.o
[rdw77236@bfh103-13 Project1 - HelloWorld]$ ./plc
Hello, 
World!
[rdw77236@bfh103-13 Project1 - HelloWorld]$ ls -l
total 76
-rwx------ 1 rdw77236 root 8549 Sep  3 20:12 plc
-rwx------ 1 rdw77236 root  229 Sep  3 20:13 plc.c
-rwx------ 1 rdw77236 root 1632 Sep  3 20:12 plc.o
*/
