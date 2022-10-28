#include"main.h"
/**
 * *_strcat - Concatenates two strings
 *
 * @dest: copy to
 *
 * @src: copy to
 *
 * Return: A pointer to the destination
 */

char *_strcat(char *dest, char *src)
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
