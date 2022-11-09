#include <stdio.h>
#include "main.h"
/**
 *print_diagsums - prints the sum of the two diagonals
 *of a square matrix of integers
 *@a: square matrix of which we print the sum of diagonals
 *@size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int b;
	unsigned int a1, a2;

	a1 = 0;
	a2 = 0;
	for (b = 0; b < size; b++)
	{
		a1 += a[(size * b) + b];
		a2 += a[(size * (b + 1)) - (b + 1)];
	}
	printf("%d, %d\n", a1, a2);
}
