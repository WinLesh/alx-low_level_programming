#include"main.h"
/**
 * *strcat - Concatenates the string pointed to by @src,
 * including the terminating
 * null byte, to the end of the string pointed to by @dest.
 *
 *@dest: A pointer to the string to be concatenated upon.
 *
 *@src: The source string to be appended to @dest.
 *
 *Return: A pointer to the destination string @dest
 */
char *strcat(char *dest, const char *src)
{
	int i = 0, len = 0;

	while (dest[i] != '\0')
		i++;

	while (src[len] != '\0')
	{
		dest[i] = src[len];
		len++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
