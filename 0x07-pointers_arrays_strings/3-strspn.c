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
	int a = 0, b;
	int targetmatches = 0;

	while (s[a] != '\0') /*iterate through string*/
	{
		for (b = 0; accept[b] != '\0'; b++) /*iterate through target*/
		{
			if (s[a] == accept[b]) /*record & break at first match*/
			{
				targetmatches++;
				break;
			}
			if (accept[b + 1] == '\0' && s[a] != accept[b])
				return (targetmatches);/*return if idx doesn't match*/
		}
		a++;
	}
	return (targetmatches); /* return num if all match till end */
}
