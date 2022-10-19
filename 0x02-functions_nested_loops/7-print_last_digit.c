include "main.h"
/**
 * print_last_digit - print last digit of a number.
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int lastdigit;
	int lastdigit = lastdigit % 10;

	if (lastdigit < 0)
		lastdigit *= -1;
	_putchar(lastdigit + '0');

	return (0);
}
