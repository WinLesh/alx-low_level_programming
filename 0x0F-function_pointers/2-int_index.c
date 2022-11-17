#include "function_pointers.h"
/**
 *int_index - searches for an integer
 *@array: input integer array.
 *@size: size of the array.
 *@cmp: pointer to the function to be used
 *to compare values.
 *Return: index of the first eement for which the cmp
 *function does not return 0. If no elements matches,
 *return -1. If size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int b;

	if (array && cmp)
	{
		if (size <= 0)

			return (-1);

		for (b = 0; b < size; b++)
		{
			if (cmp(array[b]))
				return (b);
		}
	}
	return (-1);
}
