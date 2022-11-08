#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * fills the first n bytes of the memory area pointed
 * to by s with the constant b.
 * @s: memory area to be filled
 * @b: char to copy
 *@n: bytes of the memory area to be filled.
 *Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int me;

	for (counter = 0; counter < n; counter++)
	{
		s[counter] = b;
	}
	return (s);
}
