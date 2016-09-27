/*
* Project 2 - formatted output
* P2File1.c
* COMPSCI 240
* Rio Weber
* 9-9-2015
===========COMPLEATED
https://montcs.bloomu.edu/240/Asns/01.basics.shtml
*/
#include <stdio.h>
#include <stdlib.h> // for random(), srandom()
#include <time.h>
#include <math.h>

int main(int argc, char **argv)
{
	//%[flags][width][.precision][length]specifier - make new pi or modify the original??

    	double pi = M_PI;
	unsigned int pi2 = M_PI;
	printf("CONSTANT\n******************************************************************\n");
	printf("       pi: _%25.23f_  _%15.13f_  _%5.3f_\n", pi, pi, pi);
	printf("\t   _%25u_  _%15u_  _%5u_\n", pi2, pi2, pi2);
	printf("\t   _%25x_  _%15x_  _%5x_\n", pi2, pi2, pi2);

	double avogadro;
	avogadro = 6.022140857e23;
	//avogadro = 6.022140857 * 1000000000000000000000000
	unsigned int avogadro2 = (double) avogadro;
	printf("******************************************************************\n");
	printf(" Avogadro: _%25.19e_  _%15.8e_  _%5.0e_\n", avogadro, avogadro, avogadro);
	printf("\t   _%25.1u_  _%15u_  _%5u_\n", avogadro2, avogadro2, avogadro2);
	printf("\t   _%25x_  _%15x_  _%5x_\n", avogadro2, avogadro2, avogadro2);

	printf("******************************************************************\n");
	double bigPrime = 1500450271;
	unsigned int bigPrime2 = (double) bigPrime;
	printf("big prime: _%25.0f_  _%15.0f_  _%5.0e_\n", bigPrime, bigPrime, bigPrime);
	printf("\t   _%25u_  _%15u_  _%5u_\n", bigPrime2, bigPrime2, bigPrime2);
	printf("\t   _%25x_  _%15x_  _%5x_\n", bigPrime2, bigPrime2, bigPrime2);

	printf("******************************************************************\n");
	//char name[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', '\0'};
	char name[8] = {'R', 'i', 'o', 'r', 'd', 'e', 'n', '\0'};
	printf("     name: _%25s_  _%15s_  _%5s_\n", name, name, name);
	printf("\t   _%-25s_  _%-15s_  _%-5s_\n", name, name, name);
	printf("\t   _%25x_  _%15x_  _%5x_\n", name, name, name);

	printf("******************************************************************\n");
	char letter = 'a';
	printf("  letter: _%25c_  _%15c_  _%5c_\n", letter, letter, letter);
	printf("\t  _%-25c_  _%-15c_  _%-5c_\n", letter, letter, letter);
	printf("\t  _%25x_  _%15x_  _%5x_\n", letter, letter, letter);

    	return 0;
}
