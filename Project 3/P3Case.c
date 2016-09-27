/*
* Project 3 - Case Calculator
* P3Case.c
* COMPSCI 240
* Rio Weber
* 9-16-2015
https://montcs.bloomu.edu/240/Asns/02.parse-arithmetic.shtml
*/

#include <stdio.h>
#include <math.h>

void printString(char operation, double value) {
	printf("a%cb == %.4lf\n", operation, value);
}

int main() {

	double num1, num2, total;
	char operation;
	int r;

	printf("\nEnter: number, operator, number, on one line:\n");
	scanf("%lf %c %lf", &num1, &operation, &num2);

	switch (operation) {
		case '+':
			printString(operation, num1 + num2);
			break;
		case '-':
			printString(operation, num1 - num2);
			break;
		case '*':
			printString(operation, num1 * num2);
			break;
		case '/':
			if (num2 == 0) { printf("Cannot divide by zero.\n"); break; }
			printString(operation, num1 / num2);
			break;
		case '\\':
			r = (int)num1 / num2;
			printf("a/b == %d\n", r);
			break;
		case '\%':
			printString(operation, fmod(num1, num2));
			break;
		case 'p':
			printf("a to the bth power == %.4lf\n", pow(num1, num2));
		case 'l':
			total = log(num1) / log(num2);
			printf("base-b log of a == %.4lf\n", total);
		default:
			printf("Unknown operator %c\n", operation);
	}
	return 0;
}
