/*
	File: lab2.C

	Author: Yang JiHoon
	Date: 2021-09-15
	Course: Problem Solving Methods

	Summary of File:
		This file contains code which calculates a formula.
*/
#include <stdio.h>

/*
	void calculate(int* n1, int* n2, int* re1, int* re2, int* re3, int* re4)

	Summary of the Calculate funcion:
		The calculate function, multiplication, division, remainder, addition

	Parameters: calculate: *, /, %, +

	Description:
		This function calculates multiplication, division, remainder, addition
		of two numbers. 
*/
void calculate(int* n1, int* n2, int* re1, int* re2, int* re3, int* re4);

/*
	void main()

	Summary of the Calculate function:
		The main function, get input numbers and activate calculate function, print result.

	Parameters:
		scanf: input number

	Description:
		This function input two numbers and activate function, print result.
*/
void main() {
	int n1, n2, re1, re2, re3, re4;  //declare n1, n2, re1, re2, re3, re4
	/* Input number */
	printf("Input number1: ");
	scanf_s("%d", &n1);  //enter n1
	printf("Input number2: ");
	scanf_s("%d", &n2);  //enter n2
	calculate(&n1, &n2, &re1, &re2, &re3, &re4);
	/* print results */
	printf("%d * %d = %d\n", n1, n2, re1);
	printf("%d / %d = %d\n", n1, n2, re2);
	printf("%d %% %d = %d\n", n1, n2, re3);
	printf("%d + %d = %d\n", n1, n2, re4);
}

void calculate(int* n1, int* n2, int* re1, int* re2, int* re3, int* re4) {
	/* Calculate */
	*re1 = *n1 * *n2;  //re1 = n1 * n2
	*re2 = *n1 / *n2;  //re2 = n1 / n2
	*re3 = *n1 % *n2;  //re3 = n1 % n2
	*re4 = *n1 + *n2;  //re4 = n1 + n2
}