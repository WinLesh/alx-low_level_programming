#include "search_algos.h"

/**
 * recursive_search - searches for a value in an array of
 * integers using the Binary search algorithm
 *Author :Lesego Winfred
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int recursive_search(int *array, size_t size, int value)
{
	size_t c = size / 2;
	size_t d;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (d = 0; d < size; d++)
		printf("%s %d", (d == 0) ? ":" : ",", array[d]);

	printf("\n");

	if (c && size % 2 == 0)
		c--;

	if (value == array[c])
		return ((int)c);

	if (value < array[c])
		return (recursive_search(array, c, value));

	c++;

	return (recursive_search(array + c, size - c, value) + c);
}

/**
 * binary_search - calls to binary_search to return
 * the index of the number
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int binary_search(int *array, size_t size, int value)
{
	int index;

	index = recursive_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
