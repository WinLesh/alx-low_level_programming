#include"main.h"
/**
 *more_numbers - prints 10 times the numbers, from 0 to 14
 *followed by new line
 *can only use _putchar three times
 *Return: Always 0
 */

void more_numbers(void)
{
	int a, num;

	for (a = 0; a < 10; a++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num >= 10)
				_putchar(num / 10 + '0');
			_putchar(num % 10 + '0');
		}
		_putchar('\n');
	}
}
