#include"main.h"
/**
 * _islower - function to check if c is lower case
 * @c: character to check
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
