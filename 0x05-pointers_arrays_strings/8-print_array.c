#include <stdio.h>
#include "main.h"

/**
 *print_array - prints n elements of an array of integers
 *followed by a new line
 *@a: array to be printed
 *@n: number of elements to print
 */
void print_array(int *a, int n)
{
	int lesh;

	for (lesh = 0; lesh < n; lesh++)
	{
		if (lesh == 0)
			printf("%d", a[lesh]);

		else
			printf(", %d", a[lesh]);
	}
		printf("\n");
}
