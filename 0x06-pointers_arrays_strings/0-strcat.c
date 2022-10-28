#include"main.h"
/**
 * *strcat - Concatenates the string pointed to by @src,
 * including the terminating
 * null byte, to the end of the string pointed to by @dest.
 *
 * @dest: A pointer to the string to be concatenated upon.
 *
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest
 */

char *strcat(char *dest, const char *src)
{
	int i;
	int h;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	h = 0;

	while (src[h] != '\0')
	{
		dest[i] = src[h];
		i++;
		h++;
	}
	dest[i] = '\0';

	return (dest);
}
