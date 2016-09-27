/*
* Rio Weber
* Project 9 - C program
* December 4, 2015
*/
#include<stdio.h>

#define ARRAYSIZE 4

double harmean(double *, unsigned);

int main(int argc, char**argv)
{
    int i;
    double ary[ARRAYSIZE];
    double hm, total;

    printf("Enter %d f.p. values:\n", ARRAYSIZE);
    for (i = 0; i < ARRAYSIZE; i++) {
        scanf(" %lf", &ary[i]);
    }

    hm = harmean(ary, ARRAYSIZE);
    printf("asm: harmonic mean is %lf\n", hm);

    // C code - Harmonic Mean
    // for debugging
    for(i=0; i < ARRAYSIZE; i++)
    {
        total += 1/ary[i];
    }
    hm = ARRAYSIZE / total;
    printf("  C: harmonic mean is %lf\n", hm);
    return 0;
}
// HM= N/(1/a1 + 1/a2 + 1/a3 + 1/a4 + 1/a5)
