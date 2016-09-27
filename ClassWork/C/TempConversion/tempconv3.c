/* temp converter
* Rio Weber
* Sep, 2 2015
* */

#include <stdio.h>
//#include <stdlib.h>

int main(int argc, char *argv[])
{
	unsigned int i;
	float f, c;
	//char buffer[1000];

	for(i = 0; i < 3; i++)
	{
		printf("Enter degrees C: ");
		//fgets(buffer, 7, stdin);
		//c = atof(buffer);
		scanf(" %f", &c); // need the & for address of c
		f = c * 9.0/5.0 + 32;
		printf("%f\t%f\n", c, f);
	}

	return 0;
}
