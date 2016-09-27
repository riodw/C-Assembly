/* Harmonic Mean - CS 240 - ECredit - 10 pts
 * Rio Weber
 * Extra Credit 
 * October 27, 2015
 */

#include <stdio.h>
#include <stdlib.h>

double solveThis(double num, double *ary)
{
    double sum = 0;
    double answer = 0;
    int i;

    for(i = 0; i < num; i++)
    {
        sum += 1 / *(ary + i);
    }

    answer = num / sum;

    return answer;
}

//main
int main(int argc, char **argv)
{
    double ary[10001]; // array of all the values
    int num = 0, input = 0;

    printf("Enter <= 10,000 values:\n");
    while (num < 10001)
    {
        input = scanf(" %lf", (ary + num) );
        // check to see if End Of File
        if (input == EOF)
        {
            break;
        }

        num++; // next
    } 

    // out put
    printf("Harmonic mean of %d values is %lf\n", num, solveThis(num, ary));

    return 0;
}