/* Sine-wave plotter
* Rio Weber - CS 240
* 09-14-2015
*/

#include<stdio.h>
#include<math.h> // sine() ftn

int main(int argc, char **argv)
{
	int width, columns; // e.g. 80 columns
	float x, y;
	unsigned i;

	printf("How many columns? ");
	scanf(" %d", &width); // '&' not used for strings

	for(i = 0; i < 40; i++)
	{
		x = (4.0 * M_PI) * (i/40.0); // or just M_PI / 10.0
		y = sin(x);
		columns = width/2 + y*(width/2);

		//printf("%3d %6.3f %6.3f\n", i, x, y);
		printf("%*c\n", columns, '*');
	}

	return 0;
}
// gcc -Wall -lm -o sine1 sine1.c

