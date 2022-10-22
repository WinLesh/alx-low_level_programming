#include"main.c"
/**
 *more_numbers - prints 10 times the numbers, from 0 to 14
 *followed by new line
 *can only use _putchar three times
 *Return: Always 0
 */
void more_numbers(void)
{
	int l, m;

	for (l = 0; l <= 9; l++)
	{
		for (m = 0; m <= 14; m++)
		{
			if (m > 9)
			{
				_putchar((m / 10) + '0');
			}
			_putchar((m % 10) + '0');
		}
		_putchar('\n');
	}
}
