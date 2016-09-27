/* cmd-lime args
* 2015-9-23
*/

#include <stdio.h>

int main(int argc, char **argv)
{

	char **pa;
	
	for(pa = argv; pa < argv + argc; pa++)
		printf("%p  %p  %c  %s\n", pa, *pa, *pa[0], *pa);

	return 0;
}

/*
[rdw77236@bfh103-14 ClassWork]$ ./cmd 3.14159 Rio Weber
0x7ffdc8685f18  0x7ffdc86871c6  .  ./cmd
0x7ffdc8685f20  0x7ffdc86871cc  3  3.14159
0x7ffdc8685f28  0x7ffdc86871d4  R  Rio
0x7ffdc8685f30  0x7ffdc86871d8  W  Weber
*/
