/*
* Project 2 - loop, tabular output
* P2File4.c
* COMPSCI 240
* Rio Weber
* 9-12-2015
===========COMPLEATED
*/
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
	float windChill;
	float min_Temp = -8;
	float max_Temp = 8;
	float min_Wind = 0;
	float max_Wind = 9;

	printf("Min, Max temperature: ");
	scanf(" %f %f", &min_Temp, &max_Temp);
	printf("Min, Max wind: ");
	scanf(" %f %f", &min_Wind, &max_Wind);
	

	printf("\n  T \\ W\t");
	float i = 0;
	while(i < max_Wind)
	{
		printf("   %.1f ", i);
		i = i + 2.5;
		
	}
	printf("\n\t------ ------ ------ ------\n");


	float t = max_Temp;
	while(t >= min_Temp)
	{
		printf(" %4.1f |", t);
		float w = min_Wind;
		while(w < max_Wind)
		{
			windChill = 35.74 + (0.6215 * t) - (35.75 * pow (w, .16)) + (0.4275 * t * pow (w, .16));
			printf("%7.1f", windChill);
			w = w + 2.5;
		}
		t = t - 2;
		printf("\n");
	}
	printf("\n");

	return 0;
}
// Dont forget to "-lm" when testing










