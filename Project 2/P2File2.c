/*
* Project 2 - basic input
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
	float n1, n2;
	char name[20];
	printf("Enter your name: ");
	scanf(" %s", &name);
	printf("Enter an integer and a real number: ");
	scanf(" %f %g", &n1, &n2);
	printf("\nname: %s; integer: %.0f; real: %.5f\n\n", name, n1, n2);

	return 0;
}
