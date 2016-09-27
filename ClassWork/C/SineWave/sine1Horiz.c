/* Sine-wave plotter
* Rio Weber - CS 240
* 09-14-2015
*/

#include<stdio.h>
#include<math.h> // sine() ftn

int main(int argc, char **argv)
{
	int width, height, row; // e.g. 80 columns // e.g. 35 rows
	float x, y;
	//float xlist[1000], ylist[1000];
	int yrows[1000];
	unsigned i, j;

	printf("How many columns and rows? ");
	scanf(" %d %d", &width, &height); // '&' not used for strings

	for(i = 0; i < width; i++) {
		x = (4.0 * M_PI) * (1.0 * i/width); // or just M_PI / 10.0 // 1.0* so that the number is not 0	
		y = sin(x);
		//xlist[i] = x;
		//ylist[i] = y;
		row = height/2 - y * height/2;
		yrows[i] = row;

		//printf("%3d %6.3f %6.3f\n", i, x, y);
	}

	for(i = 0; i < height; i++) {
		for(j = 0; j < width; j++)
			if(yrows[j] == i)
				printf("*");
			else
				printf(" ");
		printf("\n");
	}

	return 0;
}
// gcc -Wall -lm -o sine1 sine1.c

