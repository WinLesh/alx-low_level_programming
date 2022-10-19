#include"main.h"
/**
 * print_sign - print + if n is greater than zero
 * 0 if n is zero and - if n is less than zero
 * @n: takes integer type input for function.
 * Return: 0 or 1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
