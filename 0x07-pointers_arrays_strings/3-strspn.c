#include "holberton.h"
/**
 *_strspn - Gets the length of a prefix substring.
 *@s: The string to be searched.
 *@accept: The prefix to be measured.
 *Return: The number of bytes in s which
 *consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bt = 0;
	int num;

	while (*s)
	{
		for (num = 0; accept[num]; num++)
		{
			if (*s == accept[num])
			{
				bt++;
				break;
			}
			else if (accept[num + 1] == '\0')
				return (bt);
		}
		s++
	}
	return (bt);
}
