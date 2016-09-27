/*
* Project 2 - structure
* P2File2.c
* COMPSCI 240
* Rio Weber
* 9-9-2015
*/
#include <stdio.h>
#include <stdlib.h> // for random(), srandom()
#include <time.h>
#include <math.h>

int main(int argc, char **argv)
{
	float temp, c, f, k;
	char units;

	printf("Temperature: ");
	scanf(" %f", &temp);
	printf("Units: ");
	scanf(" %c", &units);

	if(units == 'C' || units == 'c')
	{
		c = temp;
		f = c * 9.0/5.0 + 32;
		k = c + 273.15;
	}

	if(units == 'F' || units == 'f')
	{
		f = temp;
		c = (f - 32) * 5.0/9.0;
		k = c + 273.15;
	}

	if(units == 'K' || units == 'k')
	{
		k = temp;
		c = k - 273.15;
		f = c * 9.0/5.0 + 32;
		
	}

	printf("\nF: %.1f  C: %.0f  K: %.2f\n\n", f, c, k);

	return 0;
}
