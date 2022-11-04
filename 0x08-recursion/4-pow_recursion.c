#include "main.h"
/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The number to be raised.
 * @y: The power.
 * Return: result of the power
 *
 */
int _pow_recursion(int x, int y)
{
	int num;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	num *= _pow_recursion(x, y - 1);
	return (num);
}
