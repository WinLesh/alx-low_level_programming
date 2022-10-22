#include <unistd.h>

/**
 *_putchar - writes the character c to standout
 *@c: The character to print
 *Return: 1 if c is uppercase, 0 otherwise
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
